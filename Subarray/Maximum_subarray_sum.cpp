//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   ll max_sum = INT_MIN;
   ll cur_sum = 0;
   for(int i = 0; i < n; i++) {
      cur_sum += a[i];
      max_sum = max(max_sum, cur_sum);
      if(cur_sum < 0) cur_sum = 0;
   }
   cout << max_sum << "\n";
   return 0;
}
// for explain : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/ 
// https://www.geeksforgeeks.org/problems/save-your-life4601/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
// https://leetcode.com/problems/maximum-subarray/