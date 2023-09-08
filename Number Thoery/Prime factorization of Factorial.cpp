//Approach 1: (important)
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
bitset<N>f;
void sieve () {
   f[0] = f[1] = true; 
    for(int i = 4; i <= N; i = i + 2) f[i] = true;
    for(int i = 3; i * i < N; i += 2) {
      if(!f[i]){ 
         for(int j = i * i; j < N; j += 2*i) f[j] = true;
     }
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   vector<int>prime;
   for(int i = 2; i < N; i++) {
      if(!f[i]) prime.push_back(i);
   }
   ll t; cin >> t;
   for(ll cs = 1; cs <= t; cs++ ) {
      ll n; cin >> n;
      cout << "Case " << cs << ": " << n << " = ";
      for(auto p : prime) {
            if(p > n) break;
            ll exp = 0;
            for(ll i = 1; i <= n; i++) {
               ll x = i;
               while(x % p == 0) {
                  exp++;
                  x /= p;
               }
            }
            if(p != 2) cout << " * ";
            cout << p << " (" << exp << ")";
         }
      cout << "\n";
   }
  return 0;
 }

// approach 2: 
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6 + 9;
bitset<N>f;
void sieve () {
   f[0] = f[1] = true; 
    for(int i = 4; i <= N; i = i + 2) f[i] = true;
    for(int i = 3; i * i < N; i += 2) {
      if(!f[i]){ 
         for(int j = i * i; j < N; j += 2*i) f[j] = true;
     }
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   ll t; cin >> t;
   for(ll cs = 1; cs <= t; cs++ ) {
      ll n; cin >> n;
      cout << "Case " << cs << ": " << n << " = ";
      for(ll p = 1; p <= n; p++) {
         if(!f[p]) {
            ll exp = 0;
            for(ll i = 1; i <= n; i++) {
               ll x = i;
               while(x % p == 0) {
                  exp++;
                  x /= p;
               }
            }
            if(p != 2) cout << " * ";
            cout << p << " (" << exp << ")";
         }
      }
      cout << "\n";
   }
  return 0;
 }

// https://prnt.sc/YioSnnICyUkJ