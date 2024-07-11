// (a[i] < a[j] < a[k]), i < j < k

// Exist of Triplete

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<int> pre(n + 2, mod), suf(n + 2, 0);
  for(int i = 1; i <= n; i++) {
    pre[i] = min(pre[i - 1], a[i]);
  }
  for(int i = n; i >= 1; i--) {
    suf[i] = max(suf[i + 1], a[i]);
  }
  int cnt = 0;
  for(int i = 2; i < n; i++) {
    int x = pre[i - 1], y = suf[i + 1];
    if(x < a[i] and y > a[i]) cnt++;
  }
  if(cnt >= 1) {
    cout << "YES\n";
  }
  else {
    cout << "\n";
  }
  return 0;
}


// Count Of triplete

// In The Name Of ALLAH
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
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  // if values are non unique
  o_set<pair<int, int>> st;

  for(int i = 1; i <= n; i++) {
  	l[i] = st.order_of_key({a[i], i});
  	st.insert({a[i], i});
  }
  st.clear();
  for(int i = n; i >= 1; i--) {
  	r[i] = st.size() - st.order_of_key({a[i] + 1, i});
  	st.insert({a[i], i});
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
  	ans += l[i] * r[i];
  }
  cout << ans << "\n";
  return 0;
}