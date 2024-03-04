//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e4 + 8, mod = 1e9 + 7;
bitset<N>f; // initially false;
void sieve() {
   f[0]=f[1]=true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
    }
  }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
  }
   int t; cin >> t;
   while(t--) {
   int n; cin >> n;
   int count_of_divisor = 1;
   for(auto p : prime) {
      if(p > n) break;
      int power_of_p = 0;
      for(int i = p; i <= n; i += p) { 
          int x = i;
          while(x % p == 0) {
            power_of_p++;
            x /= p;
          }
      }
      count_of_divisor = 1ll * count_of_divisor * (power_of_p + 1) % mod;
   }
   cout << count_of_divisor << "\n";
 }
    return 0;
}


// approach 2: 
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e4 + 8, mod = 1e9 + 7;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i <= N; i++) spf[i] = i;
   for(int i = 2; i <= N; i++) {
      if(spf[i] == i) {
      for(int j = i; j <= N; j += i) spf[j] = min(spf[j], i);
     }
   }
   int t; cin >> t;
   while(t--) {
   int n; cin >> n;
   vector<int> cnt(n + 1, 0);
   int count_of_divisor = 1;
   for(int i = 1; i <= n; i++) {
      int x = i;
      while(x > 1) {
         int k = spf[x];
         x /= k;
         cnt[k]++;
      }
   }
   for(auto e : cnt) {
      count_of_divisor = 1ll * count_of_divisor * (e + 1) % mod;
   }
   cout << count_of_divisor << "\n";
   
 }
    return 0;
}
