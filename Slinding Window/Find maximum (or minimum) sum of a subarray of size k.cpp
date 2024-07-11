//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cur_sum = 0, max_sum = 0;
  for(int i = 0; i < k; i++) {
    cur_sum += a[i];
  }
  max_sum = max(max_sum, cur_sum);
  for(int i = k; i < n; i++) {
    cur_sum = cur_sum + a[i] - a[i - k];
    max_sum = max(max_sum, cur_sum);
  }
  cout << max_sum << "\n";
  return 0;
}

// https://www.geeksforgeeks.org/find-maximum-minimum-sum-subarray-size-k/