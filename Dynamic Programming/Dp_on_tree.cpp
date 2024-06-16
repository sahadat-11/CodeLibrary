// Find the size of all subtree;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int sz[N];

void func(int vertex, int par) {
  sz[vertex] = 1;
	for(auto child : g[vertex]) {
		if(child != par) {
			func(child, vertex);
      sz[vertex] += sz[child];
		}
	}
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; // n = node m = edge
  for(int i = 1; i < n; i++) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
  }
  func(1, 0);
  for(int i = 1; i <= n; i++) {
    cout << sz[i] << " ";
  }
  return 0;
}

// https://www.geeksforgeeks.org/calculate-number-nodes-subtrees-using-dfs/



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e5 + 7;
vector<int> g[N];
int dp[N][2];

void func(int vertex, int par) {
  dp[vertex][0] = 1;
  dp[vertex][1] = 1;
  for(auto child : g[vertex]) {
    if(child != par) {
      func(child, vertex);
      dp[vertex][0] = (dp[vertex][0] * (dp[child][0] + dp[child][1])) % mod;;
      dp[vertex][1] = (dp[vertex][1] * dp[child][0]) % mod;
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; // n = node m = edge
  for(int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  func(1, 0);
  cout << (dp[1][0] + dp[1][1]) % mod << "\n";
  return 0;
}


// https://atcoder.jp/contests/dp/tasks/dp_p?lang=en 