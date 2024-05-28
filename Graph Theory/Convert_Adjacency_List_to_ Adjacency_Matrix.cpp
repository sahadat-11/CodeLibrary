//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100 + 7;
int adjacency_matrix[N][N];
int main() {
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		int u, k; cin >> u >> k;
		while(k--) {
			int v; cin >> v;
            adjacency_matrix[u][v] = 1;
		}
	}
   for(int i = 1; i <= n; i++) {
   	for(int j = 1; j <= n; j++) cout << adjacency_matrix[i][j] << " ";
   	 cout << "\n";
   }
  return 0;
}
