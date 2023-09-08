//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool divisible(string s) {
  int n = s.size();
  int last = s[n - 1];
  if(last % 2) return false;
  int sum = 0;
   for(int i = 0; i < n; i++) {
    sum += s[i];
  }
  if(sum % 3) return false;
  return true;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  if(divisible(s)) cout << "divisible\n";
  else cout << "NO\n";
  return 0;
}
