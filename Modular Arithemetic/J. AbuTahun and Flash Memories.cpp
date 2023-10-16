//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x, a; cin >> n >> x >> a;
  int r = a / x;
  cout << ((n + r - 1) / r) << "\n";
  return 0;
}
