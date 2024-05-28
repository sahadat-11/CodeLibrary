//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
       for(int j = i; j < N; j += i) {
         spf[j] = min(spf[j], i);
       }
     }
   }
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      vector<int> ans;
      while(n > 1) {
         int k = spf[n];
         ans.push_back(k);
         n /= k;
      }
      for(auto u : ans) cout << u << " "; cout << "\n";
   }
   return 0;
}
// complexity O(t * log(n)) 1 to N spf pre calculate


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 9;
bitset<N> f; 
vector<int> prime;
void sieve() {
   f[0] = f[1] = true;
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
         for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
      }
   }
   for(int i = 2; i < N; i++) {
     if(!f[i]) prime.push_back(i);
   } 
   //for(int i = 0; i < prime.size(); i = i + 100) cout << prime[i] << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   ll t; cin >> t;
   for(ll i = 1; i <= t; i++) {
      ll n; cin >> n;
      vector<int> ans;
      for(auto p : prime) {
         if(p * p >= n) break;
         if(n % p == 0) {
           while(n % p == 0) {
             ans.push_back(p);
             n /= p;
           }
         }
      }
      if(n > 1) {
        ans.push_back(n);
      }
      for(auto u : ans) cout << u << " "; cout << "\n";
   }
   return 0;
}
//O(t * prime) 1 to N prime pre calculate
// https://prnt.sc/o4S6knQOFi7B
// https://prnt.sc/hzogSi6v6vNs
// https://prnt.sc/YS4sjDUoFgWn 
// https://prnt.sc/zDdoPEslmt-e
// https://prnt.sc/XCc9dNzLdOLz
// problem : https://lightoj.com/problem/trailing-zeroes-i