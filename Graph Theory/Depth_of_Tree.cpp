//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int depth[N];

void dfs(int vertex, int par) {
	depth[vertex] = depth[par] + 1;
	for(auto child : g[vertex]) {
		if(child != par) {
			dfs(child, vertex);
		}
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
  }
  dfs(1, 0);
  for(int i = 1; i <= n; i++) {
    cout << depth[i] << " ";
  }
  return 0;
}

// https://prnt.sc/0xMyWLtiy6lr