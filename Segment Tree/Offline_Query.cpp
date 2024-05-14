#include<bits/stdc++.h>
using namespace std;

const int N = 30005, QQ = 2e5 + 9;
int t[N * 4];
void build(int n, int b, int e) {
  if (b == e) {
    t[n] = 0;
    return;
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = t[l] + t[r];
}

void upd(int n, int b, int e, int i, int v) {
  if (i < b or e < i) return;
  if (b == e) {
    t[n] += v;
    return;
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  upd(l, b, mid, i, v);
  upd(r, mid + 1, e, i, v);
  t[n] = t[l] + t[r];
}

int query(int n, int b, int e, int i, int j) {
  if (e < i or j < b) return 0;
  if (b >= i and e <= j) {
    return t[n];
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int a[N];
vector<pair<int, int>> Q[N];
int ans[QQ];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int q; cin >> q;
  for (int i = 1; i <= q; i++) {
    int l, r; cin >> l >> r;
    Q[r].push_back({l, i});
  }
  build(1, 1, n);
  map<int, int> last_oc;
  for (int r = 1; r <= n; r++) {
    if (last_oc.find(a[r]) != last_oc.end()) {
      upd(1, 1, n, last_oc[a[r]], -1);
    }
    last_oc[a[r]] = r;
    upd(1, 1, n, r, +1);

    for (auto [l, q_id]: Q[r]) {
      ans[q_id] = query(1, 1, n, l, r);
    }
  }
  for (int i = 1; i <= q; i++) {
    cout << ans[i] << '\n';
  }
  return 0;
}