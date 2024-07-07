//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e5 + 7;
vector<int> g[N];
int subtree_sum[N], cnt[N];

void dfs(int vertex, int par) { 
	subtree_sum[vertex] = 1, cnt[vertex] = 0;
    for(auto child : g[vertex]) {
		if(child != par) {
			dfs(child, vertex);
            cnt[vertex] = max(cnt[vertex], cnt[child]);
            subtree_sum[vertex] += subtree_sum[child];
		}
	}
   cnt[vertex] += subtree_sum[vertex];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++) {
        int u = i + 1, v = a[i];
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << cnt[1] << "\n";
    for(int i = 1; i <= n; i++) {
        g[i].clear();
        subtree_sum[i] = 0;
        cnt[i] = 0;
    }
  }
  return 0;
}