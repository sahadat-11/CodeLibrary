//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int lcmfind(int a, int b) {
	return a / (__gcd(a, b)) * b;
}
void solve() {
   int n; cin >> n;
   int lcm = 1;
   for(int i = 2; i <= n; i++) {
      lcm = lcmfind(lcm, i);
   }
   cout << lcm << "\n";
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

// Time complexity : O(nlog n)