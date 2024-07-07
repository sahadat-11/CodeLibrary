//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  map<int, int> mp;
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    ans += mp[i - a[i]];
    mp[i - a[i]]++;
  }
  cout << ans << "\n";
  return 0;
}