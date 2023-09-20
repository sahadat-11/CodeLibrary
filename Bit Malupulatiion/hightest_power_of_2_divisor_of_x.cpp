//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x; cin >> x;
  // approach 1:
  cout << (x & ~(x - 1)) << "\n"; 
  // approach 2:
  int c = __builtin_ctz(x);
  cout << (1 << c) << "\n";
  return 0;
}

// complexity (O(log2(n)))