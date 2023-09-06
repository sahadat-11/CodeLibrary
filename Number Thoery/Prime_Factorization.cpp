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
    if(n > 1) primes_facts.push_back(n);
    for(auto u : primes_facts) cout << u << " ";
    return 0;
}
//https://prnt.sc/WnCmNEO0nsrX 


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
   if(n > 1) prime_fact.push_back(n);
   for(auto u : prime_fact) cout << u << " ";
   return 0;
}

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
   if(n > 1) cout << n << " " << 1 << "\n";
   return 0;
}
