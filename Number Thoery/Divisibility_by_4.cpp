//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  int a = s[n - 1]; // last digit
  int b = s[n - 2]; // 2nd last digit;
  int sum = b * 10 + a;
  if(sum % 4 == 0) cout << "divisible\n";
  else cout << "NO\n";
  return 0;
}
// https://prnt.sc/1iE3rlcp1ruj 