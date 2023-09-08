//In The Name of ALLAH
#include <bits/stdc++.h>

using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void check(ll n) {
  for(ll i = 2; ; i++) {
    ll s = i * (i + 1) / 2;
    if(s > n) break;
    ll k = n - s;
    if(k % i) continue; // if rem er man thakle ta n er equal hobe na;
    cout << i << "\n";
    return;
  }
  cout << - 1 << "\n";
}
int main() {
  sahadat();
  ll n; cin >> n;
  check(n);
  return 0;
}
