//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX_BIT = 32, mod = 1e9 + 7;
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
      for(ll bit = 0; bit < MAX_BIT; bit++) {
         ll zero = 0;
         for(ll i = 0; i < n; i++) {
            if(!(a[i] & (1 << bit))) {
               zero++;
            }
         }
         sum += ((binexp(2, n) - 1) - (binexp(2, zero) - 1)) * binexp(2, bit);
      }
      cout << sum << "\n";
   }
   return 0;
}
// https://www.geeksforgeeks.org/sum-of-bitwise-or-of-all-possible-subsets-of-given-set/