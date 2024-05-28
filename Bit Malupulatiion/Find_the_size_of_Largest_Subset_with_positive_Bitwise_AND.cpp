//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int ans = 0;
   for(int bit = 0; bit < 32; bit++) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
      if((1 << bit) & v[i]) {
        cnt++;
      }
    }
    ans = max(ans, cnt);
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