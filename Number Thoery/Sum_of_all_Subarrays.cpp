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
  int sum = 0;
  for(int i = 0; i < n; i++) {
   sum += (a[i] * (i + 1) * (n - i)) % mod; 
  }
  cout << sum << "\n";
  return 0;
}
// https://www.geeksforgeeks.org/sum-of-all-subarrays/
// https://www.geeksforgeeks.org/problems/sum-of-subarrays2229/1
