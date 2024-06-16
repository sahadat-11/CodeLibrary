//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
//#define int long long
int n, k, a[N];
int dp[N][N][2];

int func(int i, int sum, int nisi) {
  if(i == n + 1) return sum == 0 and nisi;
  int &ans = dp[i][sum][nisi];
  if(ans != -1) return ans;
  ans = func(i + 1, sum, nisi);
  ans |= func(i + 1, (sum + a[i]) % k, 1);
  return ans;
}

void solve() {
  cin >> n >> k;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] %= k;
  }
  if(n >= k) { // pigion hole principle
    cout << "Yes\n"; return;
  }
  memset(dp, -1, sizeof dp);
  if(func(1, 0, 0)) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  }
  
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7, mod = 1e9 + 7;
//#define int long long
int n, k, a[N];
int dp[N][N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k; int a[n + 1];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] %= k;
  }

  if(n >= k) { // pigion hole principle
    cout << "YES\n"; return 0;
  }
  for(int i = 1; i <= n; i++) {
    dp[i][a[i] % k] = 1;
    for(int j = 0; j < k; j++) {
      dp[i][j] = dp[i][j] || dp[i - 1][j];
      dp[i][j] = dp[i][j] || dp[i - 1][(j - (a[i] % k) + k) % k];
    }
  }
  
  if(dp[n][0]) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}


// https://codeforces.com/problemset/problem/577/B 
// https://vjudge.net/problem/HackerRank-si-divisible-subsequence 


