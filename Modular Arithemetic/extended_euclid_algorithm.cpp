//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int extended_gcd(int a, int b, int &x, int &y) {
  if(b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int d = extended_gcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return d;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b, x, y; cin >> a >> b;
   int g = extended_gcd(a, b, x, y);
   cout << g << " " << x << " " << y << endl;;
   return 0; 
}
// https://prnt.sc/Gi1qXikeTII6
// https://prnt.sc/-3Y8nyWHqPQi