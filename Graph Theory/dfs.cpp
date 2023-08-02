//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 107;
vector<int> adj[N];
bool vis[N];
int timer;
int discovert_time[N], finis_time[N];
void dfs(int u) {
	vis[u] = true;
	timer++;
	discovert_time[u] = timer;
	for(auto v : adj[u]) {
		if(!vis[v]) {
			dfs(v);
		}
	}
	timer++;
	finis_time[u] = timer;
}
int main() {
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		int u, x; cin >> u >> x;
		while(x--) {
			int v; cin >> v;
			adj[u].push_back(v);
		}
		sort(adj[u].begin(), adj[u].end());
	}
	dfs(1);
	for(int u = 1; u <= n; u++) {
		cout << u << " " << discovert_time[u] << " " << finis_time[u] << "\n";
	}
  return 0;
}

// https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_11_B 
// https://prnt.sc/er4CWVjIgXka
// https://prnt.sc/SNLj0awV2pfm