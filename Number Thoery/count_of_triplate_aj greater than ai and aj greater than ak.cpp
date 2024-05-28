//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int cnt = 0;
   for(int i = 0; i < n; i++) {
     for(int j = i + 1; j < n; j++) {
     	for(int k = j + 1; k < n; k++) {
     		if(v[j] > v[i] and v[j] > v[k]) {
     		  cnt++;
     		}
     	}
     }
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


// if not contain duplicate value;
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
   o_set<int> st1, st2;
   vector<int> pre(n, 0), suf(n, 0);
   for(int i = 0; i < n; i++) {
   	  pre[i] = st1.order_of_key(v[i]);
      st1.insert(v[i]);
   }
   for(int i = n - 1; i >= 0; i--) {
   	  suf[i] = st2.order_of_key(v[i]);
      st2.insert(v[i]);
   }
   for(int i = 0; i < n; i++) {
   	cout << i << " " << pre[i] << " " << suf[i] << endl;
   }
   for(int i = 0; i < n; i++) {
   	cnt += (pre[i] * suf[i]);
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


// if contain duplicate value;
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
   o_set<pair<int, int>> st1, st2;
   vector<int> pre(n, 0), suf(n, 0);
   for(int i = 0; i < n; i++) {
   	  pre[i] = st1.order_of_key({v[i], i});
      st1.insert({v[i], i});
   }
   for(int i = n - 1; i >= 0; i--) {
   	  suf[i] = st2.order_of_key({v[i], i});
      st2.insert({v[i], i});
   }
   for(int i = 0; i < n; i++) {
   	cout << i << " " pre[i] << " " << suf[i] << endl;
   }
   for(int i = 0; i < n; i++) {
   	cnt += (pre[i] * suf[i]);
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