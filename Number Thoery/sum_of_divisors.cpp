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
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    cout << sumdivs[n] << "\n";
  }
   return 0;
}

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