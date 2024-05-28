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
  for(int u = 1; u <= n; u++) {
  	cout << u << ": ";
    for(auto v : g[u]) {
    	cout << v << " ";
    }
    cout << "\n";
  }
  return 0;
}

// Adjacency List
// Complexity O(N * M)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<pair<int, int>> g[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v, w; cin >> u >> v >> w;
  	g[u].push_back({v, w});
  	g[v].push_back({v, w});
  }
  for(int u = 1; u <= n; u++) {
  	cout << u << ":\n";
    for(auto [v, w] : g[u]) {
    	cout << v << " " << w << "\n";
    }
    cout << "\n";
  }
  return 0;
}

// Adjacency List
// Complexity O(N * M)