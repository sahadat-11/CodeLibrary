//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e4 + 7;
bool vis[N];
vector<int> g[N];
int sum, cnt;
int a[N];

void dfs(int u) {
	vis[u] = true;
  sum += a[u]; cnt++;
	for(auto v : g[u]) {
		if(!vis[v]) {
			dfs(v);
		}
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cout << "Case " << ++ cs << ": ";
    int n, m; cin >> n >> m; // n = node m = edge
    for(int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    while(m--) {
      int u, v; cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    bool flag = true;
    set<int> st;
    for(int i = 1; i <= n; i++) {
      if(!vis[i]) {
       sum = 0, cnt = 0;
       dfs(i);
       //cout << sum << " " << cnt << "\n";
       if(sum % cnt) {
         flag = false; break;
       } 
       else {
        int each_person = sum / cnt;
        st.insert(each_person);
       }
      }
    }
    //for(auto u : st) cout << u << "  ";
    if(flag and st.size() == 1) cout << "Yes\n";
    else cout << "No\n";
    for(int i = 1; i <= n; i++) {
      vis[i] = false;
      g[i].clear();
    }
  }
  
  return 0;
}