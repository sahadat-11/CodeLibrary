//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n; cin >> n;
      ll max_bit = log2(n) + 1;
      ll sum  = 0;
      for(int i = 0; i < max_bit; i++) {
         for(int j = i + 1; j < max_bit; j++) {
            ll current_val = 0;
            current_val |= (1ll << i);
            current_val |= (1ll << j);
            if(current_val <= n) {
               sum = (sum + current_val) % mod;
            }
         }
      }
      cout << sum << "\n";
   }
   return 0;
}

// jehetu 2 bits tai (2 er power er bitset 1. tai 2ta 2 er power
// power add korle tatal 2 set bit hobe; (so all possibe 2 er power create kora)

// https://prnt.sc/5QXDq_kMfgZi