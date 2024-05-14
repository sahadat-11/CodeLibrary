#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
const int N = 1e6 + 7;
int l[N], r[N];
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  // if values are unique
  o_set<int> st;
  for(int i = n; i >= 1; i--) {
  	r[i] = st.order_of_key(a[i]);
  	st.insert(a[i]);
  }
  st.clear();
  for(int i = 1; i <= n; i++) {
  	l[i] = st.size() - st.order_of_key(a[i] + 1);
  	st.insert(a[i]);
  }
  for(int i = 1; i <= n; i++) {
    cout << l[i] << " ";
  }
  cout << "\n";
  for(int i = 1; i <= n; i++) {
    cout << r[i] << " ";
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
  	ans += l[i] * r[i];
  }
  cout << ans << "\n";
  return 0;
}

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
const int N = 1e6 + 7;
int l[N], r[N];
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  // if values are non unique
  o_set<pair<int, int>> st;
  for(int i = n; i >= 1; i--) {
  	r[i] = st.order_of_key({a[i], i});
  	st.insert({a[i], i});
  }
  st.clear();
  for(int i = 1; i <= n; i++) {
  	l[i] = st.size() - st.order_of_key({a[i], i});
  	st.insert({a[i], i});
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
  	ans += l[i] * r[i];
  }
  cout << ans << "\n";
  return 0;
}

//https://prnt.sc/UvbxHuK4wZz4