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
   int mx = 0, fs = -1, ls = -1;
   for(int i = 1; i < n; i++) {
   	 if(a[i] != a[0]) fs = max(fs, i);
   }
   for(int i = n - 2; i >= 0; i--) {
   	 if(a[i] != a[n - 1]) ls = max(ls, n - i - 1);
   }
   cout << max(fs, ls) << "\n"; 
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   int x = s[0], ans = 0;
   for(int i = n - 1; i >= 0; i--) {
   	if(x != s[i]) {
   		ans = max(ans, max(i, n - i - 1));
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