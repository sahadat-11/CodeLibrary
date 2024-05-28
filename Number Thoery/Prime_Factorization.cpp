//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int n; cin >> n;
    vector<int> primes_facts;
    for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
        while(n % i == 0) {
          primes_facts.push_back(i);
          n /= i;
        }
      }
    }
    if(n > 1) {//if now n is also prime greater than sqaureroot
      primes_facts.push_back(n);
    } 
    for(auto u : primes_facts) cout << u << " ";
    return 0;
} 
// (O(sqrt(n)))
// https://prnt.sc/WnCmNEO0nsrX 
// https://prnt.sc/jO8jRBZrzMqQ

// // distinct prime divisors
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> prime_fact;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
         prime_fact.push_back(i);
         while(n % i == 0) {
            n /= i;
         }
      }
   }
   if(n > 1) {//if now n is also prime greater than sqaureroot
     prime_fact.push_back(n);
   } 
   for(auto u : prime_fact) cout << u << " ";
   return 0;
}
// (O(sqrt(n)))
// https://prnt.sc/WnCmNEO0nsrX 
// https://prnt.sc/jO8jRBZrzMqQ


// count the each prime divisor; 
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
         int c = 0;
         while(n % i == 0) {
            c++;
            n /= i; 
         }
         cout << i << " " << c << "\n";
      }
   }
   if(n > 1) {//if now n is also prime greater than sqaureroot
    cout << n << " " << 1 << "\n";
  }
   return 0;
}
// (O(sqrt(n)))
// https://prnt.sc/WnCmNEO0nsrX 
// https://prnt.sc/jO8jRBZrzMqQ


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
   //(n * log(n)) // precalculate
   int n; cin >> n; 
   map<int, int> prime_factors;
   while(n > 1) {
     int prime = spf[n];
     while(n % prime == 0) {
       prime_factors[prime]++;
       n /= prime;
     }
   }
   for(auto p : prime_factors) {
     cout << p.first << " " << p.second << "\n";
   } 
   return 0;
}
//(log(n))


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
   //(n * log(n)) // precalculate
   int n; cin >> n; 
   map<int, int> prime_factors;
   while(n > 1) {
     int prime = spf[n];
       prime_factors[prime]++;
       n /= prime;
   }
   for(auto p : prime_factors) {
     cout << p.first << " " << p.second << "\n";
   } 
   return 0;
}
//(log(n))


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 9;
bitset<N> f; 
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }

   vector<int> prime;
   for(int i = 2; i <= N; i++) {
      if(!f[i]) prime.push_back(i);
   }

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
// https://prnt.sc/z0x6Pz6QV221
// https://prnt.sc/o4S6knQOFi7B
// https://prnt.sc/hzogSi6v6vNs
// https://prnt.sc/YS4sjDUoFgWn 
// https://prnt.sc/zDdoPEslmt-e
// https://prnt.sc/XCc9dNzLdOLz
// problem : https://lightoj.com/problem/trailing-zeroes-i