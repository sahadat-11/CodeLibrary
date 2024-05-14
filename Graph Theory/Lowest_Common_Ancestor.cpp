//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int parent[N];

void dfs(int vertex, int par) {
  parent[vertex] = par;
  for(auto child : g[vertex]) {
    if(child != par) {
      dfs(child, vertex);
    }
  }
}
vector<int> path(int p) {
  vector<int> ans;
  while(p != 0) {
    ans.push_back(p);
    p = parent[p];
  }
  reverse(ans.begin(), ans.end());
  return ans;
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
  dfs(1, 0);
  int p, q; cin >> p >> q;
  vector<int> ans1, ans2;
  ans1 = path(p);
  ans2 = path(q);
  // for(auto u : ans1) cout << u << " ";
  // cout << "\n";
  // for(auto u : ans2) cout << u << " ";
  // cout << "\n";
  int x = min((int)ans1.size(), (int)ans2.size());
  int ans = -1;
  for(int i = 0; i < x; i++) {
    if(ans1[i] == ans2[i]) {
      ans = ans1[i];
    }
    else break;
  }
  cout << ans << "\n";
  return 0;
}