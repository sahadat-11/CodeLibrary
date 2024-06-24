//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
  }
  int ans = 1;
  for(auto [val, fre] : mp) {
    ans = (ans * (fre + 1)) % mod;
  }
  cout << ans - 1 << "\n";
} 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://www.codechef.com/problems/DISTELE?tab=statement