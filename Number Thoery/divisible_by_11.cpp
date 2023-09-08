//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  ll oddsum = 0, evensum = 0;
  for (ll i = 0; i < n; i = i + 2) {
    oddsum += (s[i] - '0');
  }
  for (ll i = 0; i < s.size(); i += 2) {
    evensum += (s[i] - '0');
  }
  if (abs(oddsum - evensum) % 11) cout << "NO\n";
  else cout << "YES\n";
  return 0;
}
// https://prnt.sc/bhHL6_cHfhbc