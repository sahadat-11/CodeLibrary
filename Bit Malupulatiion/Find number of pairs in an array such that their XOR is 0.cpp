//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
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
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
  }
  int ans = 0;
  for(auto [val, fre] : mp) {
    ans += (fre * (fre - 1) / 2);
  }
  cout << ans << "\n";
  return 0;
}