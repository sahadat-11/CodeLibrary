//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int cnt = 0;
   for(int i = 60; i >= 0; i--) {
     int mask = (1ll << i);
     if(mask <= n) {
     	n -= mask;
     	cnt++;
     	cout << mask << "\n";
     }
   }
   cout << cnt << "\n";
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