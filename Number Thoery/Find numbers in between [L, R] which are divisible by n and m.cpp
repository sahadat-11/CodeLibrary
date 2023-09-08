//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, m, l, r; cin >> n >> m >> l >> r; 
  ll g = __gcd(n, m); 
  if((long double)n / g > (long  double)r / m) {
     cout << 0 << "\n";
     return 0;
  }
  ll lc = n / g * m;
  cout << r / lc - (l - 1) / lc << "\n";
  return 0;
}
