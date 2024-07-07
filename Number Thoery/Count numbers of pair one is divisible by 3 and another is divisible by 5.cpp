//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int c3 = 0, c5 = 0, c15 = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] % 3 == 0) c3++;
    if(a[i] % 5 == 0) c5++;
    if(a[i] % 15 == 0) c15++;
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] % 3 == 0) { // only for 3 and 5;
        if(a[i] % 5 != 0) {
            ans += c5 - c15;
        }
    }
  }
  ans += (c3 - c15) * c15; // only 3 with 15;
  ans += (c5 - c15) * c15; // only 5 with 15;
  ans += c15 * (c15 - 1) / 2; // 15 pair with 15;
  cout << ans << "\n";
  return 0;
}