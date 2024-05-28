//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   cout << __gcd(a, b); // gcd
   cout << gcd(a, b);
   return 0; 
}
