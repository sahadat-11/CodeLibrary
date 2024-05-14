//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int indeg[N], outdeg[N];
bool vis[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v; // (u > v)
    indeg[v]++;
  	g[u].push_back(v);
  	//g[v].push_back(u);
  }
  vector<int> ans;
  while((int)ans.size() < n) {
    int cur = 0;
    for(int i = 1; i <= n; i++) {
      if(!vis[i] and indeg[i] == 0) {
        cur = i; break;
      }
    }
    //cout << cur << endl;
    if(cur == 0) {
      cout << "IMPOSSIBLE\n"; return 0;
    }
    ans.push_back(cur);
    vis[cur] = true;
    for(auto v : g[cur]) {
      indeg[v]--;
    }
  } 
  for(auto x : ans) cout << x << " ";
  return 0;
}

// O(N * N)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int indeg[N], outdeg[N];
bool vis[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
    int u, v; cin >> u >> v; // (u > v)
    indeg[v]++;
    g[u].push_back(v);
    //g[v].push_back(u);
  }
  vector<int> z;
  for(int i = 1; i <= n; i++) {
    if(indeg[i] == 0) {
      z.push_back(i);
    }
  }
  vector<int> ans;
  while((int)ans.size() < n) {
    if(z.empty()) {
      cout << "IMPOSSIBLE\n"; return 0;
    }
    int cur = z.back();
    z.pop_back();
    ans.push_back(cur);
    vis[cur] = true;
    for(auto v : g[cur]) {
      indeg[v]--;
      if(!vis[v] and indeg[v] == 0) {
        z.push_back(v);
      }
    }
  } 
  for(auto x : ans) cout << x << " ";
  return 0;
}

// O(N * N)