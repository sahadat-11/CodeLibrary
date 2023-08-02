//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100 + 7;
vector<int> adj[N];
bool vis[N];
void dfs(int u) {
	vis[u] = true;
	for(auto v : adj[u]) { 
		if(!vis[v]) {
			dfs(v);
		}
	}
}
int main() {
	int n, m; cin >> n >> m; // n = node m = edge
	while(m--) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
    int ans = 0;
	for(int u = 1; u <= n; u++) {
		if(!vis[u]) {
		dfs(u);
		ans++;
	}
  }
  cout << "Connected component : " << ans << "\n";

  return 0;
 
}

// complexity O(v + e)

