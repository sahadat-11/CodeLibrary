//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int n, m;
vector<int>g[N];
int dp[N];

int func(int u) {
  if(dp[u] != -1) return dp[u];
  int ans = 0;
  for(auto v : g[u]) {
  	ans = max(ans, func(v) + 1);
  }
  dp[u] = ans;
  return dp[u];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 1; i <= m; i++) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  }
  memset(dp, -1, sizeof dp);
  int ans = 0;
  for(int i = 1; i <= n; i++) {
  	ans = max(ans, func(i));
  }
  cout << ans << "\n";
  return 0;
}

// https://www.geeksforgeeks.org/dynamic-programming-dp-and-directed-acyclic-graphs-dag/