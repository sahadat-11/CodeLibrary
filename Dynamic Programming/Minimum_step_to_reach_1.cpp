//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N];

int func(int i) {
  if(i == 1) return 0;
  if(dp[i] != -1) return dp[i];
  int ans = func(i - 1) + 1;
  if(i % 3 == 0) {
    ans = min(ans, func(i / 3) + 1);
  }
  if(i % 2 == 0) {
    ans = min(ans, func(i / 2) + 1);
  }
  dp[i] = ans;
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
  dp[1] = 0;
  for(int i = 2; i <= n; i++) {
    int ans = dp[i - 1] + 1;
    if(i % 3 == 0) {
      ans = min(ans, dp[i / 3] + 1);
    }
    if(i % 2 == 0) {
      ans = min(ans, dp[i / 2] + 1);
    }
    dp[i] = ans;
  }
  cout << dp[n] << "\n";
  return 0;
}

// https://prnt.sc/X_ubTE0o3jda
// https://prnt.sc/-W9PxDotVthx