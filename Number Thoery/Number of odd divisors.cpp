//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int a = 1;
   int x = n;
   while(n % 2 == 0) {
      n /= 2;
      a *= 2;
   }
   x /= a; // now x er divisors holo odd divisor;
   int div = 1;
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
    if(spf[i] == i) {
      for(int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
   }
   while(x > 1) {
      int d = spf[x];
      int exp = 0;
      while(x % d == 0) {
         exp++;
         x /= d;
      }
      div *= (exp + 1);
   }
   cout << div << "\n";
   return 0;
}
