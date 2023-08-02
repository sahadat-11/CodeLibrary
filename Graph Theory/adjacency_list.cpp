//Adjacency List (Undirected Graph)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100 + 7;
vector<int> adj[N];
int main() {
	int n, m; cin >> n >> m; // n = node m = edge
	while(m--) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	// degree for each node
	for(int u = 1; u <= n; u++) {
		cout << u << "-> : " << adj[u].size() << "\n";	
	}

    // list 
    for(int u = 1; u <= n; u++) {
    	cout << u << "-> : ";
    	for(auto u : adj[u]) cout << u << " "; cout << "\n";
    }
  return 0;
}

//Adjacency List (Directed Graph)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100 + 7;
vector<int> adj[N];
int main() {
	int n, m; cin >> n >> m; // n = node m = edge
	while(m--) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		//adj[v].push_back(u);
	}
    // list 
    for(int u = 1; u <= n; u++) {
    	cout << u << "-> : ";
    	for(auto u : adj[u]) cout << u << " "; cout << "\n";
    }
  return 0;
}