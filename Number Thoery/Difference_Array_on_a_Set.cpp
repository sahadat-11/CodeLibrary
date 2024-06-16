//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
vector<int> add[N], rem[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  while (q--) {
    int l, r, x; cin >> l >> r >> x; // insert x to all sets from l to r
    assert(1 <= l <= r and r <= 1e5);
    add[l].push_back(x);
    rem[r + 1].push_back(x);
  }
  int unique = 0;
  map<int, int> cnt;
  for (int i = 1; i <= n; i++) {
    for (auto x: add[i]) {
      cnt[x]++;
      if (cnt[x] == 1) ++unique;
    }
    for (auto x: rem[i]) {
      cnt[x]--;
      if (cnt[x] == 0) --unique;
    }
    // size of the set i
    cout << unique << '\n';
  }
  return 0;
}