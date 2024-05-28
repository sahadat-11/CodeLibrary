//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   int ans = INT_MAX;
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int i = 0; i < n; i++) {
   	 int gcd = v[i];
   	 for(int j = i + 1; j < n; j++) {
        gcd = __gcd(gcd, v[j]); 
       	if(gcd == 1) {
       	  ans = min(ans, j - i);
       	}
   	 }
   }
   cout << ans << "\n";
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

