//Count of different ways to express 
//N as the sum of 1, 3

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N];

int func(int i) {
  if(i == 1) return 1;
  if(i == 2) return 1;
  if(i == 3) return 2;
  if(dp[i] != -1) return dp[i];
  dp[i] = func(i - 1) + func(i - 3);
  return dp[i];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  int n; cin >> n;
  cout << func(n);
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  dp[1] = 1, dp[2] = 1, dp[3] = 2;
  for(int i = 4; i <= n; i++) {
  	dp[i] = dp[i - 1] + dp[i - 3];
  }
  cout << dp[n];
  return 0;
}

// https://prnt.sc/ibS121oF3tcd
// https://www.geeksforgeeks.org/count-ofdifferent-ways-express-n-sum-1-3-4/