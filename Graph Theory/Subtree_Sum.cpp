//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int subtree_sum[N], val[N];

void dfs(int vertex, int par) { 
	subtree_sum[vertex] += val[vertex]; // add each vertex self value;
	for(auto child : g[vertex]) {
		if(child != par) {
			dfs(child, vertex);
      subtree_sum[vertex] += subtree_sum[child];
		}
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  for(int i = 1; i <= n; i++) {
    val[i] = i;
  }
  while(m--) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
  }
  dfs(1, 0);
  for(int i = 1; i <= n; i++) {
    cout << subtree_sum[i] << " ";
  }
  return 0;
}
