//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll reduce(ll a, string b) {
  ll m = 0;
  for(int i = 0; i < b.size(); i++) {
    m = (m * 10 + (b[i] - '0')) % a;
  }
  return m;
}
ll gcd(ll a, string b) {
  ll x = reduce(a, b);
  return __gcd(a, x);
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll a; string b; cin >> a >> b;
   cout << gcd(a, b);
   return 0; 
}
