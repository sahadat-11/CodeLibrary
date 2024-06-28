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
   int cnt = 0, ans = -1;
   int pro = 1;
   for(int i = 0; i < n; i++) {
     pro = pro * a[i];
     int x = sqrtl(a[i]);
     if(x * x == a[i]) cnt++;
   }
   if(cnt == n) ans = -1;
   else {
   	 int x = sqrtl(pro);
   	 if(x * x == pro) ans = n - 1;
   	 else ans = n;
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

// https://prnt.sc/1YtFbODo2MLK