//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
vector<int> g[N], path;
int col[N], par[N];
bool cycle;
 
void dfs(int u, int p) {
  if(cycle) return;
  par[u] = p;
  col[u] = 1; // dfs call hole 1 // 1 = red
  for(auto v : g[u]) {
    if(cycle) return;
    if(col[v] == 0) {
      dfs(v, u); // dfs call akhono na hole 0 // 0 = white
    } 
    else if(col[v] == 1 and v != p) {
      cycle = true;
      int st = u;
      //cout << v << endl;
      while(u != v) {
        path.push_back(u);
        u = par[u];
      }
      path.push_back(v);
      path.push_back(st);
      reverse(path.begin(), path.end());
      return;
    }
  }
  col[u] = 2; // dfs er kaj end hole; 2 = blue;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while(m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    //g[v].push_back(u);
  }
  cycle = false;
  for(int i = 1; i <= n; i++) {
    if(col[i] == 0) dfs(i, 0);
  }
  if(!cycle) cout << "IMPOSSIBLE";
  else {
  cout << path.size() << "\n";
  for(auto u : path) cout << u << " ";
  }
  return 0;
}

// Cycle Detection For Direction Graph

// https://prnt.sc/otu_v6MgqSer 
// https://prnt.sc/_Glf4yBY9CTA


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
vector<int> g[N], path;
int par[N];
bool cycle;
bool vis[N];
 
void dfs(int u, int p) {
  if(cycle) return;
  par[u] = p;
  vis[u] = true;
  for(auto v : g[u]) {
    if(cycle) return;
    if(!vis[v]) {
      dfs(v, u); // dfs call akhono na hole 0 // 0 = white
    } 
    else if(v != p) {
      cycle = true;
      int st = u;
      //cout << v << endl;
      while(u != v) {
        path.push_back(u);
        u = par[u];
      }
      path.push_back(v);
      path.push_back(st);
      reverse(path.begin(), path.end());
      return;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while(m--) {
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
  if(!cycle) cout << "IMPOSSIBLE";
  else {
  cout << path.size() << "\n";
  for(auto u : path) cout << u << " ";
  }
  return 0;
}

// Cycle Detection For UnDirection Graph // DFS tree
// https://prnt.sc/otu_v6MgqSer 
// https://prnt.sc/_Glf4yBY9CTA