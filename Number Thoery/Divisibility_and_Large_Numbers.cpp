//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll divisible(string a, ll b) {
  ll m = 0; ll n = a.size();
  for(ll i = 0; i < n; i++) {
    m = (((m * 10) % b + a[i] - '0')) % b;
  }
  return m;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t; cin >> t;
  ll cs = 0;
  while(t--) {
  string a; ll b; cin >> a >> b;
  if(a[0] == '-') a.erase(a.begin() + 0);
  b = abs(b);
  //cout << a << b << "\n";
  ll x = divisible(a, b);
  cout << "Case " << ++ cs << ": ";
  if(x % b == 0) cout << "divisible\n";
  else cout << "not divisible\n";
 } 
  return 0;
}
// https://prnt.sc/OpOuzjkzx3Ed
// https://prnt.sc/SKLtbZNO64_H