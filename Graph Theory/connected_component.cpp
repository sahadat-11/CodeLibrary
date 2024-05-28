//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N];
vector<int> g[N];

void dfs(int u) {
	vis[u] = true;
	for(auto v : g[u]) {
		if(!vis[v]) {
			dfs(v);
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
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
  	if(!vis[i]) {
  	 dfs(i);
  	 cnt++;
  	}
  }
  cout << "Connected Component: " << cnt << "\n";
  return 0;
}

// if Connected Component is one then the graph is
// Connected Or Disconnected



// Print Connected Component

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N];
vector<int> g[N];
vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int u) {
	vis[u] = true;
	current_cc.push_back(u);
	for(auto v : g[u]) {
		if(!vis[v]) {
			dfs(v);
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
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
  	if(!vis[i]) {
  	 current_cc.clear();
  	 dfs(i);
  	 cc.push_back(current_cc);
  	 cnt++;
  	}
  }
  for(auto c_cc : cc) {
  	for(auto u : c_cc) {
  	  cout << u << " ";
  	} 
  	cout << "\n";
  }
  return 0;
}


// 2D connected Component

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1005, mod = 1e9 + 7;
#define int long long
int n, m, ans, cnt;
bool vis[N][N];
char a[N][N];

int dx[] = {0, 0, -1, +1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, +1, +1, -1, -1};

bool isValid(int x, int y) {
  return x >= 0 and x < n and y >= 0 and y < m;
}

void dfs(int i, int j) {
  vis[i][j] = true;
  for(int k = 0; k < 4; k++) {
    int x = i + dx[k];
    int y = j + dy[k];
    if(isValid(x, y) and a[x][y] == '.' and !vis[x][y]) {
      dfs(x, y);
   }
 }
}
void solve() {
   cin >> n >> m;
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
   }
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(a[i][j] == '.' and !vis[i][j]) {
        ans++;
        dfs(i, j);
      }
    }
   }
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1, cs = 0; 
  //cin >> t;
  while(t--) {
    //cout << "Case " << ++ cs << ": ";
    solve();
  }
  return 0;
}

// https://cses.fi/problemset/task/1192/
