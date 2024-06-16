//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3005, mod = 1e9 + 7;
#define int long long
int n, m;
string a, b; 
int dp[N][N];

int func(int i, int j) {
	if(i >= n or j >= m) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	int ans = func(i + 1, j);
	ans = max(ans, func(i, j + 1));
	if(a[i] == b[j]) {
	  ans = max(ans, func(i + 1, j + 1) + 1);
	}
	dp[i][j] = ans;
	return dp[i][j];
}

void print(int i, int j) {
	if(i >= n or j >= m) return;
	if(a[i] == b[j]) {
		cout << a[i];
		print(i + 1, j + 1);
		return;
	}
	int x = func(i + 1, j);
	int y = func(i, j + 1);
	if(x <= y) {
		print(i, j + 1);
	}
	else {
		print(i + 1, j);
	}
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> a >> b;
  n = a.size(), m = b.size();
  memset(dp, -1, sizeof dp);
  //cout << func(0, 0);
  print(0, 0);
  return 0;
}