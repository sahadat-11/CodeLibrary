//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += s[i];
  }
  if(sum % 3 == 0) cout << "divisible\n";
  else cout << "NO\n";
  return 0;
}
// https://prnt.sc/prkKa5yxsNzh 
// https://prnt.sc/sU6b4Q_3gI0b 