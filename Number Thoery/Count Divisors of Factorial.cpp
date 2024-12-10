// approach 1:(important)
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
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
int32_t main() {
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
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int spf[N];
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 2; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
      if(spf[i] == i) {
         for(int j = i; j < N; j += i) spf[j] = min(spf[j], i);
      }
   }
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      vector<int> cnt(n + 1, 0);
      int number_of_divisor = 1;
      for(int i = 1; i <= n; i++) {
         int x = i;
         while(x > 1) {
            int k = spf[x];
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


// approach 3:(important)
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
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
int32_t main() {
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
         int x = n;
         while(x) {
            exp += x / p;
            x /= p;
         }
         number_of_divisor = (1LL * number_of_divisor * (exp + 1)) % mod;
      }
      cout << number_of_divisor << "\n";
   }
   return 0;
}