//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<map<int,int>> dp(n + 1);
  int ans = 2; // any two number valid AP;
  for(int i = 1; i <= n; i++) {
  	for(int j = 0; j < i; j++) {
  	  int dif = a[i] - a[j];
  	  if(dp[j].count(dif)) {
  	  	dp[i][dif] = dp[j][dif] + 1;
  	  }
  	  else {
  	  	dp[i][dif] = 2;// any two number valid AP;
  	  }
  	  ans = max(ans, dp[i][dif]);
  	}
  }
  cout << ans << "\n";
  return 0;
}

// https://leetcode.com/problems/longest-arithmetic-subsequence/description/