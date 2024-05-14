//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int a[N];
int t[4 * N], lazy[4 * N];
void push(int n, int b, int e) { // change this
  if (lazy[n] == 1) return;
  t[n] = t[n] * lazy[n] % mod;
  if (b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[l] * lazy[n] % mod;
    lazy[r] = lazy[r] * lazy[n] % mod;
  }
  lazy[n] = 1;
}
int merge(int l, int r) { // change this
  return (l + r) % mod;
}
void build(int n, int b, int e) {
  lazy[n] = 1; // change this
  if (b == e) {
    t[n] = 1;
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = merge(t[l], t[r]);
}
int query(int n, int b, int e, int i, int j) { //(i, j) = range
  push(n, b, e);
  if(b > j or e < i) return 0; // totally out
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
    int n, q; cin >> n >> q;
    build(1, 1, n);
    while(q--) {
      int tp; cin >> tp;
      if(tp == 1) {
        int i, j, v; cin >> i >> j >> v;
        j--; i++; j++;
        update(1, 1, n, i, j, v);
      }
      else {
        int i, j; cin >> i >> j;
        j--; i++; j++;
        cout << query(1, 1, n, i, j) << "\n";
      }
    }
    return 0;
}