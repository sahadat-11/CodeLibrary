//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int indeg[N], outdeg[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v; // (u > v)
    indeg[v]++;
    outdeg[u]++;
  	g[u].push_back(v);
  	//g[v].push_back(u);
  }
  for(int u = 1; u <= n; u++) {
  	cout << indeg[u] << " " << outdeg[u] << "\n";
  }
  return 0;
}

// https://prnt.sc/ja7YGnRtZHHl

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  // total degree for each node
  for(int u = 1; u <= n; u++) {
    cout << (int)g[u].size() << "\n";
  }
  return 0;
}