//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
int col[N];
vector<int> g[N];
bool cycle;

void dfs(int u) {
	col[u] = 1; // red
	for(auto v : g[u]) {
		if(col[v] == 0) { // not visited
			dfs(v);
		} 
		else if(col[v] == 1) {
		  cycle = true;
		}
	}
	col[u] = 2; // green
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	//g[v].push_back(u);
  }
  cycle = false;
  for(int i = 1; i <= n; i++) {
  	if(col[i] == 0) { // not visited
  	  dfs(i);
  	}
  }
  if(cycle) cout << "Cycle Exist\n";
  else cout << "NOT\n";
  return 0;
}

// https://prnt.sc/h9B1LHbSY6SF

// Cycle Detection for Graph


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int par[N];
bool vis[N];
bool cycle;

void dfs(int u, int p) {
	par[u] = p;
	vis[u] = true;
	if(cycle) return;
	for(auto v : g[u]) {
		if(cycle) return;
		if(!vis[v]) { // not visited
			dfs(v, u);
		} 
		else if(v != p) {
		  cycle = true;
		}
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i < n; i++) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
  }
  cycle = false;
  for(int i = 1; i <= n; i++) {
  	if(!vis[i]) {
  		dfs(i, 0);
  	}
  }
	if(cycle) cout << "Cycle Exist\n";
	else cout << "NOT\n";
  return 0;
}

// Cycle Detection for DFS Tree