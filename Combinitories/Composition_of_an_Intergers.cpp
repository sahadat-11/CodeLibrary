//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 122, mod = 1e9 + 7;
#define int long long
int dp[N][N];
int n;

int func(int last, int sum) {
	if(sum == n) {
	  return 1;
	}
	int &ans = dp[last][sum];
	if(ans != -1) return ans;
	ans = 0;
	for(int i = 1; i <= n; i++) {
	  if(sum + i <= n) {
	  	ans += func(i, sum + i);
	  }
	}
	return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while(cin >> n) {
  	memset(dp, -1, sizeof dp);
  	cout << func(1, 0) << "\n";
  }
  return 0;
}

// Total state : N * N
// O(N * N * N);

// https://www.geeksforgeeks.org/number-compositions-natural-number/
// https://www.geeksforgeeks.org/print-all-combinations-of-points-that-can-compose-a-given-number/