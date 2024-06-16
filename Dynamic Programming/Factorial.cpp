//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N];

int func(int i) {
  if(i <= 1) return 1;
  if(dp[i] != -1) return dp[i];
  dp[i] = i * func(i - 1);
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
