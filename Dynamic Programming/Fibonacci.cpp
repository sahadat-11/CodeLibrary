//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N];

int func(int i) {
  if(i == 0) return 1;
  if(i == 1) return 1;
  return func(i - 1) + func(i - 2);
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << func(n);
  return 0;
}

// // O(2 ^ N)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N];

int func(int i) {
  if(i == 0) return 1;
  if(i == 1) return 1;
  if(dp[i] != -1) return dp[i];
  dp[i] = func(i - 1) + func(i - 2);
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

// O(n) // Number of State


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
  dp[1] = 1;
  for(int i = 2; i <= n; i++) {
  	dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] << "\n";
  return 0;
}

// O(N)