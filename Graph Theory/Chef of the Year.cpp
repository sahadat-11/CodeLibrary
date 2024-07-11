//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  string name[n], country[n];
  for(int i = 0; i < n; i++) {
    cin >> name[i] >> country[i];
  }
  map<string, int> mp1, mp2;
  for(int i = 0; i < m; i++) {
    string s; cin >> s;
    mp1[s]++;
  }
  for(int i = 0; i < n; i++) {
    mp2[country[i]] += mp1[name[i]];
  }
//   for(auto [u, cnt] : mp2) {
//     cout << u << " " << cnt << "\n";
//   }
  string ans1 = "zzzzzzzzzzzzz", ans2 = "zzzzzzzzzz";
  int mx = 0;
  for(auto [u, cnt] : mp2) {
    if(cnt > mx) {
      ans1 = u;
      mx = cnt;
    }
    else {
      ans1 = min(ans1, u);
    }
  }
  mx = 0;
  for(auto [u, cnt] : mp1) {
    if(cnt > mx) {
      ans2 = u;
      mx = cnt;
    }
    else {
      ans2 = min(ans2, u);
    }
  }
  cout << ans1 << "\n" << ans2 << "\n";
  return 0;
}