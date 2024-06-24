//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, capacity; cin >> n >> capacity;
  vector<int> profit(n), weight(n);
  vector<pair<double, int>> cur(n);
  for(int i = 0; i < n; i++) {
  	cin >> profit[i] >> weight[i];
  	cur[i].first = 1.0 * profit[i] / weight[i];
  	cur[i].second = i;
  }
  sort(cur.rbegin(), cur.rend());
  // for(int i = 0; i < n; i++) {
  // 	cout << cur[i].first << " " << cur[i].second << "\n";
  // }
  double ans = 0;
  for(int i = 0; i < n; i++) {
  	ans += cur[i].first * min(capacity, weight[cur[i].second]);
  	capacity -= weight[cur[i].second];
  	if(capacity <= 0) break;
  	cout << ans << " " << capacity << "\n";
  }
  cout << ans << "\n";
  return 0;
}

// https://leetcode.com/problems/maximum-units-on-a-truck/description/
// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
// https://codeforces.com/contest/1447/problem/C