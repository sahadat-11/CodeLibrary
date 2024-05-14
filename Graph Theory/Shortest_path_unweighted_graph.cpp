//Shortest Distance Connected Graph

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N];
vector<int> g[N];
int dis[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
  }
  queue<int> qe;
  qe.push(1); // source
  vis[1] = true; dis[1] = 0;
  while(!qe.empty()) {
    int u = qe.front();
    qe.pop();
    for(auto v : g[u]) {
      if(!vis[v]) {
        qe.push(v);
        vis[v] = true;
        dis[v] = dis[u] + 1;
      }
    }
  }
  for(int i = 1; i <= n; i++) {
    cout << dis[i] << " ";
  }
  return 0;
}


// Shortest Distance Disconnected Graph

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N];
vector<int> g[N];
int dis[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  queue<int> qe;
  for(int i = 1; i <= n; i++) {
    if(!vis[i]) {
      vis[i] = true;
      dis[i] = 0;
      qe.push(i);
      while(!qe.empty()) {
      int u = qe.front();
      qe.pop();
      for(auto v : g[u]) {
        if(!vis[v]) {
          qe.push(v);
          dis[v] = dis[u] + 1;
          vis[v] = true;
        }
      }
     }
    }
  }
  for(int i = 1; i <= n; i++) {
    cout << dis[i] << " ";
  }
  return 0;
}


// Shortest Path

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N];
vector<int> g[N];
int dis[N], par[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  queue<int> qe;
  qe.push(1); // source
  vis[1] = true; dis[1] = 0;
  while(!qe.empty()) {
    int u = qe.front();
    qe.pop();
    for(auto v : g[u]) {
      if(!vis[v]) { 
        qe.push(v);
        vis[v] = true;
        dis[v] = dis[u] + 1;
        par[v] = u;
      }
    }
  }
  // for(int i = 1; i <= n; i++) {
  //   cout << dis[i] << " ";
  // }

  int v = 4;
  vector<int> ans;
  while(v != 1) {
    ans.push_back(v);
    v = par[v];
  }
  ans.push_back(1);
  reverse(ans.begin(), ans.end());
  for(auto p : ans) {
    cout << p << " ";
  }
  return 0;
}



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9 + 7;
#define int long long
const int N = 2e5 + 7;
vector<int> g[N];
vector<int> dis(N, inf);
int par[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  queue<int> qe;
  qe.push(1); // source
  dis[1] = 1;

  while(!qe.empty()) {
    int u = qe.front();
    qe.pop();
    for(auto v : g[u]) {
      if(dis[u] + 1 < dis[v]) {
        qe.push(v);
        dis[v] = dis[u] + 1;
        par[v] = u;
      }
    }
  }
  
  // for(int i = 1; i <= n; i++) {
  //   cout << dis[i] << " ";
  // }

  vector<int> path;
  while(n != 0) {
    path.push_back(n);
    n = par[n];
  }
  reverse(path.begin(), path.end());
  for(auto u : path) cout << u << " ";
  return 0;
}