//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
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
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
  }
  dfs1(1, 0);
  dfs2(mx_node, 0);
  cout << ans << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e4 + 7;
vector<int> g[N];
int depth[N];

void dfs(int u, int p) {
  for(auto v : g[u]) {
    if(v != p) {
      depth[v] = depth[u] + 1;
      dfs(v, u);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cout << "Case " << ++cs << ": ";
    int n; cin >> n;
    for(int i = 1; i < n; i++) {
      int u, v; cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    depth[1] = 0;
    dfs(1, 0);
    int mx = -1, mx_node = 0;
    for(int i = 1; i <= n; i++) {
      if(depth[i] > mx) {
        mx = depth[i];
        mx_node = i;
      }
    }

    mx = -1;
    depth[mx_node] = 0;
    dfs(mx_node, 0);
    for(int i = 1; i <= n; i++) {
      if(depth[i] > mx) {
        mx = depth[i];
      }
    }
    
    cout << mx << endl;
    for(int i = 1; i <= n; i++) {
      g[i].clear();
      depth[i] = 0;
    }

  }
  return 0;
}
// Without Weight


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e4 + 7;
vector<pair<int, int>> g[N];
int depth[N];
void dfs(int u, int p) {
  for(auto [v, w] : g[u]) {
    if(v != p) {
      depth[v] = depth[u] + w;
      dfs(v, u);
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cout << "Case " << ++cs << ": ";
    int n; cin >> n;
    for(int i = 1; i < n; i++) {
      int u, v, w; cin >> u >> v >> w;
      g[u].push_back({v, w});
      g[v].push_back({u, w});
    }
    depth[1] = 0;
    dfs(1, 0);
    int mx = -1, mx_node = 0;
    for(int i = 1; i <= n; i++) {
      if(depth[i] > mx) {
        mx = depth[i];
        mx_node = i;
      }
    }
    mx = -1;
    depth[mx_node] = 0;
    dfs(mx_node, 0);
    for(int i = 1; i <= n; i++) {
      if(depth[i] > mx) {
        mx = depth[i];
      }
    }
    cout << mx << endl;
    for(int i = 1; i <= n; i++) {
      g[i].clear();
      depth[i] = 0;
    }

  }
  return 0;
}
// With Weight


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e4 + 7;
vector<pair<int, int>> g[N];
int dis1[N], dis2[N];

void dfs(int u, int p, int q) {
  for(auto [v, w] : g[u]) {
    if(v != p) {
      if(q == 1) dis1[v] = dis1[u] + w; // akhane u + hove;
      else dis2[v] = dis2[u] + w;
      dfs(v, u, q);
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cout << "Case " << ++cs << ":\n";
    int n; cin >> n;
    for(int i = 1; i < n; i++) {
      int u, v, w; cin >> u >> v >> w;
      u++; v++;
      g[u].push_back({v, w});
      g[v].push_back({u, w});
    }

    dis1[1] = 0;
    dfs(1, 0, 1);
    int mx = -1, s = 0, e = 0;
    for(int i = 1; i <= n; i++) {
      if(dis1[i] > mx) {
        mx = dis1[i];
        s = i;
      }
    }

    mx = -1;
    dis1[s] = 0;
    dfs(s, 0, 1); // s theke all node distance ds1 array te;
    for(int i = 1; i <= n; i++) {
      if(dis1[i] > mx) {
        mx = dis1[i];
        e = i;
      }
    }

    dfs(e, 0, 2); // e theke all node distance ds1 array te;
    
    for(int i = 1; i <= n; i++) {
       cout << max(dis1[i], dis2[i]) << "\n";
    }
    for(int i = 1; i <= n; i++) {
      g[i].clear();
      dis1[i] = 0;
      dis2[i] = 0;
    }
  }
  return 0;
}



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e4 + 7, inf = 1e9;
vector<pair<int, int>> g[N];
int n; 
int fartest_node(int s, vector<int> &d) {
   d.resize(n + 1, inf);
   vector<bool> vis(n + 1, false);
   queue<int> q;
   q.push(s);
   d[s] = 0;
   vis[s] = true;
   while(!q.empty()) {
     int u = q.front();
     q.pop();
     for(auto [v, w] : g[u]) {
       if(!vis[v]) {
         d[v] = d[u] + w;
         vis[v] = true;
         q.push(v);
       }
     }
   }
   int mx_dis = -1, fartest;
   for(int i = 1; i <= n; i++) {
    if(d[i] > mx_dis) {
      mx_dis = d[i];
      fartest = i;
    }
   }
   return fartest;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cout << "Case " << ++cs << ": \n";
    cin >> n;
    for(int i = 1; i < n; i++) {
      int u, v, w; cin >> u >> v >> w;
      u++, v++;
      g[u].push_back({v, w});
      g[v].push_back({u, w});
    }
    vector<int> ds, de;
    int s = fartest_node(1, ds); // 1 theke bfs chaliye s er index;
    int e = fartest_node(s, ds); // s theke bfs chaliye e er index;
                                 // s theke sobar distance ds a ase;
    fartest_node(e, de);    // e theke sobar distance de  a ase
    for(int i = 1; i <= n; i++) {
      cout << max(de[i], ds[i]) << "\n";
    }
    for(int i = 1; i <= n; i++) {
      g[i].clear();
    }
  }
  return 0;
}

// Diameter With Bfs
// https://lightoj.com/problem/farthest-nodes-in-a-tree-ii