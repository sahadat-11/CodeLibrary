//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
      ll n; cin >> n;
      vector<ll > divs;
      for(int i = 1; i * i <= n; i++) {
         if(n % i == 0) {
            divs.push_back(i);
            if(i != n / i) divs.push_back(n / i);
         }
      }
      sort(divs.begin(), divs.end());
      ll sum = 0;
      for(ll i = 0; i < divs.size(); i++) sum += divs[i];
      cout << sum << "\n";
   }
   return 0;
}
//(sqrt(n))


// approach 2:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5 + 9;
ll sumdivs[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
    for(int j  = i; j < N; j += i) sumdivs[j] += i; // divisor sum pre calculate;
   }
   // divisor_sum 1 to N;(precalculate)

   int t; cin >> t;
   while(t--) {
     int n; cin >> n;
     cout << sumdivs[n] << "\n";
   }
   return 0;
}
//(O(1))


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5 + 9;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i * i < N; i++) {
    if(spf[i] == i) {
      for(int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
   }
  //(n * log(n)) // precalculate
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    ll div_sum = 1;
    int x = n;
    while(x > 1) {
      int k = spf[x];
      ll prime_power = 1;
      while(x % k == 0) {
         x /= k;
         prime_power *= k;
      }
      div_sum *= (prime_power * k - 1) / (k - 1);
    }
    cout << div_sum << "\n";
  }
   return 0;
}

// (O(log(n)))

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e8 + 5, mod = 1e9 + 7;
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

void solve() {
   int n; cin >> n;
   int q = n;
   int sum_of_divisor = 1;
   for(auto p : primes) { 
      if(p * p > n) break;
      int power_of_p = 1;
      while(n % p == 0) {
        n /= p;
        power_of_p *= p;
      }
      if(power_of_p == 1) continue;
      int x = (p * power_of_p - 1) / (p - 1);
      sum_of_divisor *= x;
   }
   if(n > 1) sum_of_divisor *= ( n + 1);
   cout << sum_of_divisor - q << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// https://www.spoj.com/problems/DIVSUM2/
// https://prnt.sc/o4S6knQOFi7B
// https://prnt.sc/hzogSi6v6vNs
// https://prnt.sc/uKjA1tY2G6g3