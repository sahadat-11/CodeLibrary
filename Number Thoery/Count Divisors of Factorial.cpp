// approach 1:(important)
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int N = 1e6 + 7;
bitset<N>f;
vector<int> prime;
void sieve () {
   f[0] = f[1] = true; 
    for(int i = 4; i < N; i = i + 2) f[i] = true;
    for(int i = 3; i * i < N; i += 2) {
      if(!f[i]){ 
         for(int j = i * i; j < N; j += 2*i) f[j] = true;
     }
   }
   for(int i = 2; i < N; i++) {
      if(!f[i]) prime.push_back(i);
    }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve ();
    int t; cin >> t;
    while(t--) {
      int n; cin >> n;
      int number_of_divisor = 1;
      for(auto p : prime) {
         int exp = 0;
         if(p > n) break;
         for(int i = p; i <= n; i += p) {
            int x = i;
            while(x % p == 0) {
               exp ++;
               x /= p;
            }
         }
         number_of_divisor = (1LL * number_of_divisor * (exp + 1)) % mod;
      }
      cout << number_of_divisor << "\n";
    }
    return 0;
}
// approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int N = 1e6 + 7;
ll spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(ll i = 2; i < N; i++) spf[i] = i;
   for(ll i = 2; i < N; i++) {
      if(spf[i] == i) {
         for(ll j = i; j < N; j += i) spf[j] = min(spf[j], i);
      }
   }
   ll t; cin >> t;
   while(t--) {
      ll n; cin >> n;
      vector<ll> cnt(n + 1, 0);
      ll number_of_divisor = 1;
      for(ll i = 1; i <= n; i++) {
         ll x = i;
         while(x > 1) {
            ll k = spf[x];
            cnt[k]++;
            x /= k;
         }
      }
      for(auto e : cnt) {
         number_of_divisor = (number_of_divisor * (e + 1)) % mod;
      }
      cout << number_of_divisor << "\n";
   }
    return 0;
}
// https://prnt.sc/dTeGqV4oO1QJ
// https://prnt.sc/4g5UjNhVn59n