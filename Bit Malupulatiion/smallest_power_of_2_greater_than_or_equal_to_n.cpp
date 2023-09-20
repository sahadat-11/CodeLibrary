//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int x = log2(n);
  if((1 << x) == n) cout << n << "\n";
  else cout << (1 << (x + 1)) << "\n";
  return 0;
}


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n; cin >> n;
  cout << (1 << (64 - __builtin_clz (n - 1))) << "\n";
  return 0;
}
