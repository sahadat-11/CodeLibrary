//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0, now = 0;
  for(int i = n - 1; i >= 0; i--) {
  	int incr = a[i] * (1 + now);
  	ans += incr;
  	now = incr;
  }
  cout << ans << "\n";
  return 0;
}

// https://www.geeksforgeeks.org/sum-of-products-of-all-possible-subarrays/
