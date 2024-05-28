//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7;
int a[N];
int t[4 * N], lazy[4 * N];
void push(int n, int b, int e) { // change this
  if (lazy[n] == 0) return;
  t[n] = t[n] + lazy[n] * (e - b + 1);
  if (b != e) {
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    lazy[l] = lazy[l] + lazy[n];
    lazy[r] = lazy[r] + lazy[n];
  }
  lazy[n] = 0;
}
int merge(int l, int r) { // change this
  return l + r;
}
void build(int n, int b, int e) {
  lazy[n] = 0; // change this
  if (b == e) {
    t[n] = a[b];
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
  if(b > j or e < i) return 0; // totally out return accurate value
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
        int i; cin >> i;
        i++;
        cout << query(1, 1, n, i, i) << "\n";
      }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// const int N = 5e5 + 9;
// int a[N];
// struct ST {
//   #define lc (n << 1)
//   #define rc ((n << 1) + 1)
//   int t[4 * N], lazy[4 * N];
//   ST() {
//     memset(t, 0, sizeof t);
//     memset(lazy, 0, sizeof lazy);
//   }
//   inline void push(int n, int b, int e) { // change this
//     if (lazy[n] == 0) return;
//     t[n] = t[n] + lazy[n] * (e - b + 1);
//     if (b != e) {
//       lazy[lc] = lazy[lc] + lazy[n];
//       lazy[rc] = lazy[rc] + lazy[n];
//     }
//     lazy[n] = 0;
//   }
//   inline int combine(int a,int b) { // change this
//     return a + b;
//   }
//   inline void pull(int n) { // change this
//     t[n] = t[lc] + t[rc];
//   }
//   void build(int n, int b, int e) {
//     lazy[n] = 0; // change this
//     if (b == e) {
//       t[n] = a[b];
//       return;
//     }
//     int mid = (b + e) >> 1;
//     build(lc, b, mid);
//     build(rc, mid + 1, e);
//     pull(n);
//   }
//   void upd(int n, int b, int e, int i, int j, long long v) {
//     push(n, b, e);
//     if (j < b || e < i) return;
//     if (i <= b && e <= j) {
//       lazy[n] = v; //set lazy
//       push(n, b, e);
//       return;
//     }
//     int mid = (b + e) >> 1;
//     upd(lc, b, mid, i, j, v);
//     upd(rc, mid + 1, e, i, j, v);
//     pull(n);
//   }
//   long long query(int n, int b, int e, int i, int j) {
//     push(n, b, e);
//     if (i > e || b > j) return 0; //return null
//     if (i <= b && e <= j) return t[n];
//     int mid = (b + e) >> 1;
//     return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
//   }
// }t;
// int32_t main() {
//   int n = 5;
//   for (int i = 1; i <= n; i++) {
//     a[i] = i;
//   }
//   t.build(1, 1, n); // building the segment tree
//   t.upd(1, 1, n, 2, 3, 10); // adding 10 to the segment [2, 3]
//   cout << t.query(1, 1, n, 1, 5) << '\n'; // range sum query on the segment [1, 5]
//   return 0;
// }