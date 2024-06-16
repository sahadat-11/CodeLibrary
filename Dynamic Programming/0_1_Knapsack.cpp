//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105, M = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][M];
int n, W; 
int weigt[N], val[N];

int func(int i, int w) {
  if(i == n + 1) return 0;
  if(dp[i][w] != -1) return dp[i][w];
  int ans = func(i + 1, w);
  if(w + weigt[i] <= W) {
  	ans = max(ans, func(i + 1, w + weigt[i]) + val[i]);
  }
  dp[i][w] = ans;
  return dp[i][w];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n >> W;
  for(int i = 1; i <= n; i++) {
    cin >> weigt[i] >> val[i];
  }
  cout << func(1, 0);
  return 0;
}



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105, M = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][M];
int n, W; 
int weigt[N], val[N];

int func(int i, int w) {
  if(i == 0) return 0;
  if(dp[i][w] != -1) return dp[i][w];
  int ans = func(i - 1, w);
  if(w + weigt[i] <= W) {
    ans = max(ans, func(i - 1, w + weigt[i]) + val[i]);
  }
  dp[i][w] = ans;
  return dp[i][w];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n >> W;
  for(int i = 1; i <= n; i++) {
    cin >> weigt[i] >> val[i];
  }
  cout << func(n, 0);
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105, M = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][M];
int n, W; 
int weigt[N], val[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> W;
  for(int i = 1; i <= n; i++) {
    cin >> weigt[i] >> val[i];
  }

  for(int i = 1; i <= n; i++) {
    for(int c = 0; c <= W; c++) {
      int ans = dp[i - 1][c];
      if(c + weigt[i] <= W) {
        ans = max(ans, dp[i - 1][c + weigt[i]] + val[i]);
      }
      dp[i][c] = ans;
    }
  }

  cout << dp[n][0] << "\n";
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105, M = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][M];
int n, W; 
int weigt[N], val[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> W;
  for(int i = 1; i <= n; i++) {
    cin >> weigt[i] >> val[i];
  }

  for(int i = n; i >= 1; i--) {
    for(int c = 0; c <= W; c++) {
      int ans = dp[i + 1][c];
      if(c + weigt[i] <= W) {
        ans = max(ans, dp[i + 1][c + weigt[i]] + val[i]);
      }
      dp[i][c] = ans;
    }
  }

  cout << dp[1][0] << "\n";
  return 0;
}


// O(N * W);

// https://prnt.sc/c_1bZElWAl98
// https://prnt.sc/EPFznmge8j7T