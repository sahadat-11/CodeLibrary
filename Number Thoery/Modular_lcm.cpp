//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int MX[N], spf[N];
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
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int i = 0; i < n; i++) {
   	int x = v[i];
   	while(x > 1) {
   	  int p = spf[x];
   	  int cnt = 0;
   	  while(x % p == 0) {
   	  	cnt++;
   	  	x /= p;
   	  }
      MX[p] = max(MX[p], cnt);
   	}
   }
   int ans = 1;
   for(int i = 2; i < N; i++) {
   	ans = (ans * binexp(i, MX[i]) % mod) % mod;
   }
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) spf[i] = i;
  for(int i = 2; i < N; i++) {
   if(spf[i] == i) {
     for(int j = i; j < N; j += i) {
       spf[j] = min(spf[j], i);
     }
   }
  }
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://www.geeksforgeeks.org/lcm-of-n-numbers-modulo-m/