//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7, mod = 1e9 + 7;
ll f[N];
#define ll long long
void solve() {
   int n; cin >> n;
   // f[0] = 0; f[1] = 1;
   // for(int i = 2; i <= N; i++) {
   // 	 f[i] =( f[i - 1] + f[i - 2]) % mod;
   // }
   // cout << f[n + 2] << "\n";
   ll a = 1, b = 1;
   for(int i = 1; i < n; i++) {
   	 ll c = (a + b) % mod;
   	 a = b; b = c; 
   }
   cout << (a + b) % mod << "\n";
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