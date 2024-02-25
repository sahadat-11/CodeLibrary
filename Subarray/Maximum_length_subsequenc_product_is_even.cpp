//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int i = 0; i < n; i++) {
     v[i] = v[i] % 2;
   }
   int even = 0;
   for(int i = 0; i < n; i++) {
   	 if(v[i] % 2 == 0) even++;
   }
   if(even) ans = n;
   else ans = 0;
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

// https://prnt.sc/f-EpUPctThYz