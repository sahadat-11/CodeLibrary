//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N];
vector<int> g[N];
int id;
int ans[N];

void dfs(int u) {
	vis[u] = true;
  ans[u] = id;
	for(auto v : g[u]) {
		if(!vis[v]) {
			dfs(v);
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
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
  	if(!vis[i]) {
     id++;
  	 dfs(i);
  	}
  }
  // for(int i = 1; i <= n; i++) {
  //   cout << ans[i] << " ";
  // }
  int q; cin >> q;
  while(q--) {
    int u, v; cin >> u >> v;
    if(ans[u] == ans[v]) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}

// https://prnt.sc/oJXi1-ldxm_s