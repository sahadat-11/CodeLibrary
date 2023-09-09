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
   int sum_of_div = 1;
   while(n > 1) {
     int k = spf[n];
     int prime_power = 1;
     while(n % k == 0) {
       n /= k;
       prime_power *= k;
     }
     sum_of_div *= (prime_power * k - 1) / (k - 1);
   }
   cout << sum_of_div << "\n";
   return 0;
}