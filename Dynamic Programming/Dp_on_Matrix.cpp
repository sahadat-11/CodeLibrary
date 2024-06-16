//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9 + 7;
#define int long long
int dp[100][100];
int a[100][100];
int n, m;

int func(int i, int j) {
	if(i > n or j > m) return inf;
	if(i == n and j == m) return a[i][j];
	if(dp[i][j] != -1) return dp[i][j];
	dp[i][j] = a[i][j] + min(func(i, j + 1), func(i + 1, j));
	return dp[i][j];
}

void path(int i, int j) {
	cout << '(' << i << " " << j << ")-> ";
	if(i == n and j == m) return;
	int right = func(i, j + 1);
	int down = func(i + 1, j);
	if(right <= down) {
      path(i, j + 1);
	}
	else {
		path(i + 1, j);
	}
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n >> m;
  for(int i = 1; i <= n; i++) {
  	for(int j = 1; j <= m; j++) {
  	  cin>> a[i][j];
  	}
  }
  cout << func(1, 1) << "\n";
  path(1, 1);
  return 0;
}