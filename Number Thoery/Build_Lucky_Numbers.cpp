//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector <int> nums;
  for (int len = 1; len <= 9; len++) {
    for (int mask = 0; mask < (1 << len); mask++) {
      int num = 0;
      for (int k = 0; k < len; k++) { // lenth of bits 
        int digit;
        if (mask & (1 << k)) digit = 4; // check this bit is set or not
        else digit = 7;
        num = num * 10 + digit;
      }
      nums.push_back(num);
    }
  }
  sort(nums.begin(), nums.end());
  for (auto num: nums) cout << num << "\n";
  int n; cin >> n;
  cout << find(nums.begin(), nums.end(), n) - nums.begin() + 1 << "\n";
  return 0;
}

// https://prnt.sc/fqsJcBEOre1C
// O(9 * 2^9 * 9);