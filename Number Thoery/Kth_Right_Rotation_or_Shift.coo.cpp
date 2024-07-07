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
  k %= n;

  //  // Reverse the entire array
  reverse(a.begin(), a.end());

  // Reverse the first k elements
  reverse(a.begin(), a.begin() + k);

  // Reverse the rest of the elements after k
  reverse(a.begin() + k, a.end());
  
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

// https://leetcode.com/problems/rotate-array/description/
// https://leetcode.com/problems/rotate-array/solutions/4808238/easy-3-lines-detailed-explanation-reverse-approach-striver-s-approach/