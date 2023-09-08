//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  int last = s[n - 1];
  if(last % 2 == 0) cout << "divisible\n";
  else cout << "NO\n";
  return 0;
}
