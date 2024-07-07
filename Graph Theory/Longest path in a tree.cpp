// start with any node;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e4 + 7;
vector<int> g[N];
int depth[N];
int mx, mx_node, ans;

void dfs1(int vertex, int par) {
	depth[vertex] = depth[par] + 1;
    if(depth[vertex] > mx) {
        mx = depth[vertex];
        mx_node = vertex;
    }
    for(auto child : g[vertex]) {
        if(child != par) {
            dfs1(child, vertex);
        }
    }
}

void dfs2(int vertex, int par) {
  depth[vertex] = depth[par] + 1;
  ans = max(ans, depth[vertex]);
  for(auto child : g[vertex]) {
    if(child != par) {
      dfs2(child, vertex);
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
  dfs1(1, 0);
  dfs2(mx_node, 0);
  cout << ans - 1 << "\n";
  return 0;
}


// // https://www.spoj.com/problems/PT07Z/
// // https://www.geeksforgeeks.org/longest-path-undirected-tree/


// start with any node and print Path;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e4 + 7;
vector<int> g[N];
int depth[N], parent[N];
int mx, mx_node, ans;

void dfs1(int vertex, int par) {
	depth[vertex] = depth[par] + 1;
    if(depth[vertex] > mx) {
        mx = depth[vertex];
        mx_node = vertex;
    }
    for(auto child : g[vertex]) {
        if(child != par) {
            dfs1(child, vertex);
        }
    }
}

void dfs2(int vertex, int par) {
  depth[vertex] = depth[par] + 1;
  parent[vertex] = par;
  ans = max(ans, depth[vertex]);
  for(auto child : g[vertex]) {
    if(child != par) {
      dfs2(child, vertex);
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
  dfs1(1, 0);
  dfs2(mx_node, 0);
  int x = 0, mx = 0;
  for(int i  = 1; i <= n; i++) {
    if(depth[i] > mx) {
      mx = depth[i];
      x = i;
    }
  }
//   for(int i = 1; i <= n; i++) {
//     cout << parent[i] << "\n";
//   }
  //cout << mx_node << " " << x << " " << parent[mx_node] << "\n";
  
  vector<int> path;
  while(x != 0) {
    path.push_back(x);
    x = parent[x];
  }
  reverse(path.begin(), path.end());
  for(auto u : path) cout << u << " ";
  return 0;
}


// https://www.spoj.com/problems/PT07Z/
// https://www.geeksforgeeks.org/longest-path-undirected-tree/
