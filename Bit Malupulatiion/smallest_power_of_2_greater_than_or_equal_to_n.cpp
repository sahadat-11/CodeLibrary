//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int x = log2(n);
  if((1 << x) == n) cout << n << "\n";
  else cout << (1 << (x + 1)) << "\n";
  n--;
  x = log2(n);
  cout << (1 << (x + 1)) << "\n";
  return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  n--;
  int x = log2(n);
  cout << (1 << (x + 1)) << "\n";
  return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << (1 << (64 - __builtin_clzll(n - 1))) << "\n"; // for long long
  cout << (1 << (32 - __builtin_clz(n - 1))); // fol integer
  return 0;
}
