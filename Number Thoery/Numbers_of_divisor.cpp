//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   for(int i = 1; i <= n; i++) {
     if(n % i == 0) cout << i << " ";
   }
    return 0;
}
//O(n);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   for(int i = 1; i * i <= n; i++) {
     if(n % i == 0) {
       cout << i << " ";
     if(i != n / i) cout << n / i << " ";
    }
   }
    return 0;
}
// complexity O(sqrt(n));
// https://prnt.sc/7PDD-SGAc0Rd 


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
     if(n % i == 0) {
       divs.push_back(i);
       if(i != n / i) divs.push_back(n / i);
     }
   }
   sort(divs.begin(), divs.end());
   for(auto u : divs) cout << u << " ";
    return 0;
}
// complexity O(sqrt(n));
// https://prnt.sc/7PDD-SGAc0Rd


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   vector<ll> divs1, divs2;
   for(ll i = 1; i * i <= n; i++) {
      if(n % i == 0) {
         divs1.push_back(i);
         if(i != n / i) divs2.push_back(n / i);
      }
   }
   // for(auto u : divs1) cout << u << " "; cout << "\n";
   // for(auto u : divs2) cout << u << " ";
   reverse(divs2.begin(), divs2.end());
   // vector append  
  // https://docs.google.com/document/d/1GMVKqBgzSD1YDdsxqP8CQNMvxWPl-oh2iI6rdSiN MYg/edit#heading=h.qcp4ni5820dl 

   divs2.insert(divs2.begin(), divs1.begin(), divs1.end());
   for(auto u : divs2) cout << u << " ";
    return 0;
}
// https://lightoj.com/problem/iftar-party 
// https://www.codechef.com/problems/CTHREE


// number of divisor with seive
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
      ll div = 1;
      for(auto p : prime) {
         if(p * p > n) break;
         ll power_of_p = 0;
         while(n % p == 0) {
            power_of_p++;
            n /= p;
         }
         div *= (power_of_p + 1);
      }
      if(n > 1) {
         ll power_of_p = 1;
         div *= (power_of_p + 1);
      }
      
     cout << "Case " << i << ": " << div - 1 << "\n";
   }
   return 0;
}
//O(prime(2 to n) * log(prime))
// https://prnt.sc/o4S6knQOFi7B
// https://prnt.sc/hzogSi6v6vNs
// https://prnt.sc/YS4sjDUoFgWn 
// https://prnt.sc/zDdoPEslmt-e
// https://prnt.sc/XCc9dNzLdOLz
// problem : https://lightoj.com/problem/trailing-zeroes-i


// number of divisor with spf 
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
   int n; cin >> n; 
   int div = 1;
   while(n > 1) {
     int k = spf[n];
     int exp = 0;
     while(n % k == 0) {// if we need to power
     	exp++;
     	n /= k;
     }
     div *= (exp + 1);
   } 
   cout << div << " ";
   return 0;
}
//O(log(n))
// https://prnt.sc/o4S6knQOFi7B
// https://prnt.sc/hzogSi6v6vNs


// number of divisor with spf2
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
   int n; cin >> n; 
   vector<int> cnt(n + 1, 0);
   int div = 1;
   while(n > 1) {
     int k = spf[n];
     cnt[k]++;
     n /= k;
   } 
   //for(auto u : cnt) cout << u << " ";
   for(auto exp : cnt) {
     div *= (exp + 1);
   } 
   cout << div << " ";
   return 0;
}
//(O(log(n)))
// https://prnt.sc/uKjA1tY2G6g3
// https://prnt.sc/o4S6knQOFi7B
// https://prnt.sc/hzogSi6v6vNs
// https://prnt.sc/Haa8KxQheDg7
// https://prnt.sc/PuqqGQOK4XCP
// https://codeforces.com/problemset/problem/230/B


//number of divisor with spf2
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
const int N = 1e5 + 7;
int divs[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
     for(int j = i; j < N; j += i) {
       divs[j]++;
     }
   }
   // divisors count 1 to N (precalculate)
   //for(int i = 1; i <= 10; i++) cout << divs[i] << " ";
   int t; cin >> t;
   while(t--) {
     int n; cin >> n;
     cout << divs[i] << "\n"; //(1)
   }
   return 0;
}
//O(t)


