//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, l; cin >> n >> l;
   cout << fixed << setprecision(2) << (n * l * l) / (4 * tan(3.1416 / n)) << "\n"; 
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/7OTM7KeyWA2Q
// https://www.geeksforgeeks.org/area-of-a-n-sided-regular-polygon-with-given-side-length/
// https://www.tutorialspoint.com/area-of-a-n-sided-regular-polygon-with-given-side-length-in-cplusplus#:~:text=Algorithm,Print%20the%20area%20of%20polygon.
