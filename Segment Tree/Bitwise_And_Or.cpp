//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7, B = 30;
int a[N];
int lazy[4 * N];
struct node {
  int AND[B];
};
node t[4 * N];
void push(int n, int b, int e) { // change this
  if (lazy[n] == 0) return;
  for(int bit = 0; bit < 30; bit++) {
    if((lazy[n] >> bit) & 1) {
      t[n].AND[bit] = 1;
    }
  }
  if (b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[l] | lazy[n];
    lazy[r] = lazy[r] | lazy[n];
  }
  lazy[n] = 0;
}
node merge(node l, node r) { // change this
  node ans;
  for(int bit = 0; bit < 30; bit++) {
    ans.AND[bit] = (l.AND[bit] & r.AND[bit]);
  }
  return ans;
}
void build(int n, int b, int e) {
  lazy[n] = 0; // change this
  if (b == e) {
    memset(t[n].AND, 0, sizeof(t[n].AND));
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
    node one;
    fill(one.AND, one.AND + B, 1);
    return one;
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
        node ans = query(1, 1, n, i, j);
        int val = 0;
        for(int bit = 0; bit < 30; bit++) {
          if(ans.AND[bit]) {
            val += (1ll << bit);
          }
        }
        cout << val << "\n";
      }
    }
    return 0;
}

// memory(N * 30)
// time(N * log(N) * 30)


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7, B = 30;
int a[N];
int lazy[4 * N], t[4 * N];
void push(int n, int b, int e) { // change this
  if(lazy[n] == 0) return;
  for(int bit = 0; bit < 30; bit++) {
    if((lazy[n] >> bit) & 1) {
      //t[n].AND[bit] = 1;
      t[n] |= (1 << bit);
    }
  }
  if(b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[l] | lazy[n];
    lazy[r] = lazy[r] | lazy[n];
  }
  lazy[n] = 0;
}
int merge(int l, int r) { // change this
  // node ans;
  // for(int bit = 0; bit < 30; bit++) {
  //   ans.AND[bit] = (l.AND[bit] & r.AND[bit]);
  // }
  // return ans;
  return l & r;
}
void build(int n, int b, int e) {
  lazy[n] = 0; // change this
  if (b == e) {
    t[n] = 0;
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
  if(b > j or e < i) {
    // node one;
    // fill(one.AND, one.AND + B, 1);
    // return one;
    return (1ll << 30) - 1;
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
        int ans = query(1, 1, n, i, j);
        // int val = 0;
        // for(int bit = 0; bit < 30; bit++) {
        //   if(ans.AND[bit]) {
        //     val += (1ll << bit);
        //   }
        // }
        // cout << val << "\n";
        cout << ans << "\n";
      }
    }
    return 0;
}

// memory(N)
// time(N * log(N) * 30)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7, B = 30;
int a[N];
int lazy[4 * N], t[4 * N];
void push(int n, int b, int e) { // change this
  if(lazy[n] == 0) return;
  // for(int bit = 0; bit < 30; bit++) {
  //   if((lazy[n] >> bit) & 1) {
  //     //t[n].AND[bit] = 1;
  //     t[n] |= (1 << bit);
  //   }
  // }
  t[n] = t[n] | lazy[n];
  if(b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[l] | lazy[n];
    lazy[r] = lazy[r] | lazy[n];
  }
  lazy[n] = 0;
}
int merge(int l, int r) { // change this
  // node ans;
  // for(int bit = 0; bit < 30; bit++) {
  //   ans.AND[bit] = (l.AND[bit] & r.AND[bit]);
  // }
  // return ans;
  return l & r;
}
void build(int n, int b, int e) {
  lazy[n] = 0; // change this
  if (b == e) {
    t[n] = 0;
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
  if(b > j or e < i) {
    // node one;
    // fill(one.AND, one.AND + B, 1);
    // return one;
    return (1ll << 30) - 1;
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
        int ans = query(1, 1, n, i, j);
        // int val = 0;
        // for(int bit = 0; bit < 30; bit++) {
        //   if(ans.AND[bit]) {
        //     val += (1ll << bit);
        //   }
        // }
        // cout << val << "\n";
        cout << ans << "\n";
      }
    }
    return 0;
}
// memory(N)
// time(N * log(N) * 30)
