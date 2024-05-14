//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, vector<int>> mp;
   for(int i = 0; i < n; i++) {
   	mp[v[i]].push_back(i + 1);
   }
   int q; cin >> q;
   while(q--) {
   	int l, r, x; cin >> l >> r >> x;
   	int a = lower_bound(mp[x].begin(), mp[x].end(), l) - mp[x].begin();
    int b = upper_bound(mp[x].begin(), mp[x].end(), r) - mp[x].begin();
    cout << b - a << "\n";
   }
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