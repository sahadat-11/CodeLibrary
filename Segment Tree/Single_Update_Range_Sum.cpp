#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 9;
int a[N];
struct ST {
  #define lc (n << 1)
  #define rc ((n << 1) + 1)
  int t[4 * N];
  ST() {
    memset(t, 0, sizeof t);
  }
  inline int combine(int a,int b) { // change this
    return a + b;
  }
  inline void pull(int n) { // change this
    t[n] = t[lc] + t[rc];
  }
  void build(int n, int b, int e) {
    if (b == e) {
      t[n] = a[b];
      return;
    }
    int mid = (b + e) >> 1;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    pull(n);
  }
  void upd(int n, int b, int e, int i, int x) {
    if (b > i || e < i) return;
    if (b == e && b == i) {
      t[n] = x; // update
      return;
    }
    int mid = (b + e) >> 1;
    upd(lc, b, mid, i, x);
    upd(rc, mid + 1, e, i, x);
    pull(n);
  }
  long long query(int n, int b, int e, int i, int j) {
    if (i > e || b > j) return 0; //return null
    if (i <= b && e <= j) return t[n];
    int mid = (b + e) >> 1;
    return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
  }
}t;
int32_t main() {
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    t.build(1, 1, n);
    while(q--) {
     int op; cin >> op;
     if(op == 1) {
       int i, x; cin >> i >> x;
       i++; // for 1 indexing
       t.upd(1, 1, n, i, x);
     }
     else {
       int i, j; cin >> i >> j;
       j--; // i to (j - 1)
       i++; j++;// for 1 indexing
       int ans = t.query(1, 1, n, i, j);
       cout << ans << "\n";
     }
    }
}

// https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A