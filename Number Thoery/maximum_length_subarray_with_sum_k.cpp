//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int sum = 0, mx = 0;
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     sum += v[i];
     if(sum == k) mx = i + 1;
     if(mp.find(sum) == mp.end()) {
     	mp[sum] = i;
     }
     if(mp.find(sum - k) != mp.end()) {
     	mx = max(mx, i - mp[sum - k]);
     }
   }
   cout << mx << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}