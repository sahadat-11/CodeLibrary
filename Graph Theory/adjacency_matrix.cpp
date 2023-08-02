//Adjacency check 

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100 + 7;
bool adj_matrix[N][N];
int main() {
	int n, m; cin >> n >> m; // n = node m = edge
	while(m--) {
		int u, v; cin >> u >> v;
		adj_matrix[u][v] = 1;
		adj_matrix[v][u] = 1;
	}
	if(adj_matrix[3][4]) cout << "Connected\n";
	else cout << "Not Connected\n";
  return 0;
}

// adjacent create with cost (undirected)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100 + 7;
int adj_matrix[N][N];
int main() {
	int n, m; cin >> n >> m; // n = node m = edge
	while(m--) {
		int u, v, cost; cin >> u >> v >> cost;
		adj_matrix[u][v] = cost;
		adj_matrix[v][u] = cost;
	}
	for(int u = 1; u <= n; u++) {
		for(int v = 1; v <= n; v++) cout << adj_matrix[u][v] << " ";
		cout << "\n";
	}
  return 0;
}

//adjacent create with cost (directed)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100 + 7;
int adj_matrix[N][N];
int main() {
	int n, m; cin >> n >> m; // n = node m = edge
	while(m--) {
		int u, v, cost; cin >> u >> v >> cost;
		adj_matrix[u][v] = cost;
		//adj_matrix[v][u] = cost;
	}
	for(int u = 1; u <= n; u++) {
		for(int v = 1; v <= n; v++) cout << adj_matrix[u][v] << " ";
		cout << "\n";
	}
  return 0;
}

