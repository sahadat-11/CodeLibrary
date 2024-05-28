//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
ll binexp(ll a, ll b) {
   ll ans = 1;
   while(b) {
      if(b & 1) {// if b in odd
         ans = (ans * a) % mod; // type cast for integer overflow
      }
      a = (a * a) % mod;
      b >>= 1; // if b in odd(if 0th bit is set)
   }
   return ans;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n; cin >> n; ll a[n];
      for(int i = 0; i < n; i++) {
         cin >> a[i];
      }
      ll sum = 0; ll subset;
      for(ll bit = 0; bit < 32; bit++) {
         ll set_bit = 0;
         for(ll i = 0; i < n; i++) {
            if(a[i] & (1 << bit)) {
               set_bit++;
            }
         }
         subset = binexp(2, set_bit) - 1;
         subset = (subset * binexp(2, bit)) % mod;
         sum = (sum + subset) % mod;
      }
      cout << sum << "\n";
   }
   return 0;
}