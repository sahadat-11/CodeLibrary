//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int cnt = 0, ans = -1;
   ll pro = 1;
   for(int i = 0; i < n; i++) {
     pro = 1ll * pro * v[i];
     ll x = sqrtl(v[i]);
     if(x * x == v[i]) cnt++;
   }
   if(cnt == n) ans = -1;
   else {
   	 ll x = sqrtl(pro);
   	 if(x * x == pro) ans = n - 1;
   	 else ans = n;
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}