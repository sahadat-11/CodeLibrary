//Connected and Disconnected Graph

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9 + 7;
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
  int ans = inf;
  for(int i = 1; i <= n; i++) {
    vector<int> dis(n + 1, inf);
    queue<int> qe;
    qe.push(i); // source
    dis[i] = 0;
    vector<int> par(n + 1, -1);
    while(!qe.empty()) {
      int u = qe.front();
      qe.pop();
      for(auto v : g[u]) {
        if(dis[v] == inf) { // not visited
          dis[v] = dis[u] + 1;
          par[v] = u;
          qe.push(v);
        }
        else if(par[u] != v and par[v] != u){
          ans = min(ans, dis[v] + dis[u] + 1);
        }
      }
    }
  }
  if(ans == inf) {
    cout << -1 << "\n";
  }
  else cout << ans << "\n"; 
  return 0;
}
