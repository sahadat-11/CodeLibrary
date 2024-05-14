//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, l; cin >> n >> l;
   // double area = (l * l * n) / (4 * tan((180 / n) * 3.1416 / 180));
   double area = (l * l * n) / (4 * tan(3.1416 / n));
   cout << fixed << setprecision(5) << area << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/iL5rPNzw-h4k