//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
int g[N][N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v; cin >> u >> v;
  	g[u][v] = 1;
  	g[v][u] = 1;
  }
  for(int u = 1; u <= n; u++) {
    for(int v = 1; v <= n; v++) {
      cout << g[u][v] << " ";
    }
    cout << "\n";
  }
  return 0;
}

// Adjacency Matrix
// Complexity O(N * N)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
int g[N][N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; // n = node m = edge
  while(m--) {
  	int u, v, w; cin >> u >> v >> w;
  	g[u][v] = w;
  	g[v][u] = w;
  }
  for(int u = 1; u <= n; u++) {
    for(int v = 1; v <= n; v++) {
      cout << g[u][v] << " ";
    }
    cout << "\n";
  }
  return 0;
}

// Adjacency Matrix
// Complexity O(N * N)