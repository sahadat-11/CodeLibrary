//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
//#define int long long
const int N = 1e3 + 7, INF = 1e9 + 7;
vector<pair<int, int>> g[N];
vector<int> lev(N, INF);

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v;
    if(u == v) continue;
  	g[u].push_back({v, 0});
  	g[v].push_back({u, 1});
  }
  deque<int> de;
  de.push_back(1);
  lev[1] = 0;
  while(!de.empty()) {
    int cur_v = de.front();
    de.pop_front();
    for(auto child : g[cur_v]) {
       int child_v = child.first;
       int child_wt = child.second;
       if(lev[cur_v] + child_wt < lev[child_v]) {
         lev[child_v] = lev[cur_v] + child_wt;
         if(child_wt == 1) {
           de.push_back(child_v);
         } 
         else {
          de.push_front(child_v);
         }
       }
    }
  }
  cout << lev[n] << "\n";
  return 0;
}