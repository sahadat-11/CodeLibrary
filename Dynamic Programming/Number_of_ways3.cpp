//Count of different ways to express 
//N as the sum of any positive numbers

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
#define int long long
int dp[N];

int func(int i) {
  if(i == 0) return 1;
  if(dp[i] != -1) return dp[i];
  int ans = 0;
  for(int j = 1; j <= i; j++) {
    ans += func(i - j);
    ans %= mod;
  }
  dp[i] = ans;
  return dp[i];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  int n; cin >> n;
  cout << func(n) << "\n";
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
  dp[0] = 1;
  for(int i = 1; i <= n; i++) {
    int ans = 0;
    for(int j = 1; j <= i; j++) {
      ans += dp[i - j];
    }
    dp[i] = ans;
  }
  cout << dp[n];
  return 0;
}
