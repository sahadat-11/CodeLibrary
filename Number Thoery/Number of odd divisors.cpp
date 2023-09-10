//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
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
   return 0;
}
