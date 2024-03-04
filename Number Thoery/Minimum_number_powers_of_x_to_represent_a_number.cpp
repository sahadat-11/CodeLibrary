//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int binexp(int a, int b) {
	int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
	while(b) {
		if(b & 1) {
			ans = (ans * 1ll * a) % mod;
		}
		a = (a * 1ll * a) % mod;
		b >>= 1;
	}
	return ans;
}
void solve() {
   int n, x; cin >> n >> x;
   int cnt = 0;
   for(int i = 10; i >= 0; i--) {
   	int mask = (binexp(x, i));
   	if(mask <= n and n) {
   		cnt++;
   		n -= mask;
   		cout << n << " " << mask << "\n";
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