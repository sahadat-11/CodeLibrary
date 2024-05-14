//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7, B = 30;
int a[N];
int lazy[4 * N];
struct node {
  int ON[B], OFF[B];
};
node t[4 * N];
void push(int n, int b, int e) { // change this
  if (lazy[n] == 0) return;
  for(int bit = 0; bit < B; bit++) {
    if((lazy[n] >> bit) & 1) {
      swap(t[n].ON[bit], t[n].OFF[bit]);
    }
  }
  if(b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[l] ^ lazy[n];
    lazy[r] = lazy[r] ^ lazy[n];
  }
  lazy[n] = 0;
}
node merge(node l, node r) { // change this
  node ans;
  for(int bit = 0; bit < B; bit++) {
    ans.ON[bit] = l.ON[bit] + r.ON[bit];
    ans.OFF[bit] = l.OFF[bit] + r.OFF[bit];
  }
  return ans;
}
void build(int n, int b, int e) {
  lazy[n] = 0; // change this
  if(b == e) {
    for(int bit = 0; bit < B; bit++) {
      if((a[b] >> bit) & 1) {
        t[n].ON[bit] = 1;
        t[n].OFF[bit] = 0;
      }
      else {
        t[n].ON[bit] = 0;
        t[n].OFF[bit] = 1;
      }
    }
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = merge(t[l], t[r]);
}
node query(int n, int b, int e, int i, int j) { //(i, j) = range
  push(n, b, e);
  if(b > j or e < i) {
    node zero;
    memset(zero.ON, 0, sizeof(zero.ON));
    memset(zero.OFF, 0, sizeof(zero.ON));
    return zero;
  }
  if(b >= i and e <= j) {// totally in
    return t[n];
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void update(int n, int b, int e, int i, int j, int v) {
  push(n, b, e);
  if (j < b || e < i) return;
  if (i <= b && e <= j) {
    lazy[n] = v; //set lazy
    push(n, b, e);
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  update(l, b, mid, i, j, v);
  update(r, mid + 1, e, i, j, v);
  t[n] = merge(t[l], t[r]);
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    int q; cin >> q;
    while(q--) {
      int tp; cin >> tp;
      if(tp == 1) {
        int i, j; cin >> i >> j;
        node ans = query(1, 1, n, i, j);
        int sum = 0;
        for(int bit = 0; bit < B; bit++) {
          sum += (1ll * ans.ON[bit] * (1 << bit));
        }
        cout << sum << "\n";
      }
      else {
        int i, j, x; cin >> i >> j >> x;
        update(1, 1, n, i, j, x);
      }
    }
    return 0;
}