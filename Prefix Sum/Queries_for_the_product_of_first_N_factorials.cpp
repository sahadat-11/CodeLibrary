//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int fact[N], pre_fact[N];
void solve() {
   int n; cin >> n;
   cout << pre_fact[n] << endl;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fact[0] = 1;
  pre_fact[0] = 1;
  for(int i = 1; i < N; i++) {
  	fact[i] = (fact[i - 1] * 1ll * i) % mod;
  	pre_fact[i] = (pre_fact[i - 1] % mod * fact[i] % mod) % mod;
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}