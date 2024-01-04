//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, k; cin >> n >> k; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      ll cur_sum = 0;
      for(int i = 0; i < k; i++) cur_sum += a[i];
      ll min_sum = cur_sum;
      for(int i = k; i < n; i++) {
         cur_sum += a[i];
         cur_sum -= a[i - k];
         min_sum = min(min_sum, cur_sum);
      }
      cout << min_sum << "\n";
   }
   return 0;
}

// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1