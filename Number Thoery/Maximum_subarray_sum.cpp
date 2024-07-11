// It can be empty that means if max sum is neg
// its answer zero

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int max_sum = INT_MIN;
   int cur_sum = 0;
   for(int i = 0; i < n; i++) {
      cur_sum += a[i];
      max_sum = max(max_sum, cur_sum);
      if(cur_sum < 0) cur_sum = 0;
   }
   cout << max_sum << "\n";
   return 0;
}


// It can not be empty that means if max sum is neg
// its answer can be neg
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int max_sum = INT_MIN;
   int cur_sum = 0, mx = INT_MIN;
   for(int i = 0; i < n; i++) {
      cur_sum += a[i];
      max_sum = max(max_sum, cur_sum);
      if(cur_sum < 0) cur_sum = 0;
      mx = max(mx, a[i]);
   }
   if(max_sum <= 0) {
    cout << mx << "\n";
   }
   else {
    cout << max_sum << "\n";
   }
   return 0;
}
// https://cses.fi/problemset/task/1643/


// for explain : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/ 
// https://www.geeksforgeeks.org/problems/save-your-life4601/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
// https://leetcode.com/problems/maximum-subarray/