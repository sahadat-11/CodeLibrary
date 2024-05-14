//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n), temp(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     temp[i] = v[i];
   }
   sort(temp.begin(), temp.end());
   // for(int i = 0; i < n; i++) {
   //  cout << temp[i] << " "; 
   // }
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
   	mp[v[i]] = i;
   }
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	if(v[i] != temp[i]) {
   	  int x = i, y = mp[temp[i]];
   	  //cout << x << " " << y << endl;
   	  mp[v[x]] = y;
   	  mp[v[y]] = x;
   	  swap(v[x], v[y]);
   	  cnt++;
   	}
   }
   cout << max(0ll, cnt - 1) << "\n";
   // for(int i = 0; i < n; i++) {
   //  cout << v[i] << " "; 
   // }
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