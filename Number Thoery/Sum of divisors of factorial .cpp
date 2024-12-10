//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bitset<N>f;
vector<int> primes;
void sieve() {
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   primes.push_back(2);
   for(int i = 3; i <= N; i += 2) {
      if(!f[i]) primes.push_back(i);
   }
}

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

int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve ();
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      int sum_of_divisor = 1;
      for(auto p : primes) {
        if(p > n) break;
        int x = n, power_of_p = 0;
        while(x) {
           power_of_p += x / p;
           x /= p;
        }
        sum_of_divisor = sum_of_divisor * (binexp(p, power_of_p + 1) - 1) % mod * binexp(p - 1, mod - 2) % mod;
      }
      cout << sum_of_divisor << "\n";
   }
   return 0;
}

// https://www.geeksforgeeks.org/sum-divisors-factorial-number/