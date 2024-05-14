//In The Name of ALLAH
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int cnt = 0;
   o_set<pair<int, int>> st;
   for(int i = n - 1; i >= 0; i--) {
   	  cnt += st.order_of_key({v[i], i});
      st.insert({v[i], i});
    }
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}