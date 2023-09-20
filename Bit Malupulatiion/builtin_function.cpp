//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << __builtin_clz(n) << "\n"; //leading(ager) zero
  cout << __builtin_ctz(n) << "\n"; //trailing(porer) zero
  cout << __builtin_popcount(n) << "\n"; // count total set bit;
  cout << __builtin_popcountll(n) << "\n"; // count total set bit;(long long)
  cout << __builtin_parity(n) << "\n";// even 1 retrun 0, odd 1 return 1;
  return 0;
}