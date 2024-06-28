//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int, int> mp;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(mp.find(a[i]) != mp.end()) {
      ans = max(ans, i - mp[a[i]]);
    }
    else {
      mp[a[i]] = i;
    }
  }
  cout << ans << "\n";
  return 0;
}