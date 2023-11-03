#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // o_set<int> se;
  // se.insert(4);
  // se.insert(2);
  // se.insert(5);
  // se.insert(4);
  // se.insert(5);
  // se.insert(7);
  // se.insert(6);
  // for(auto u : se) cout << u << " "; cout << "\n"; // 2 4 5 6 7
  // se.erase(4);
  // for(auto u : se) cout << u << " "; cout << "\n";// 2 5 6 7
  // cout << se.order_of_key(5) << '\n'; // number of elements < 5
  // cout << se.order_of_key(6) << '\n'; // number of elements < 6
  // auto it = se.find_by_order(1);// if you imagine this as a 0-indexed vector, what is se[1]?
  // cout << *it << "\n";
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    o_set<pair<int, int>> st;
    for(int i = n - 1; i >= 0; i--) {
      st.insert({a[i], i});
    }
    for(auto u : st) {
      cout << u.first << " " << u.second << endl;
    }
  return 0;
}
// (O(log n));
// all is normal set; it is using only for what is the value in target index;
// set of pair
// https://www.geeksforgeeks.org/sets-of-pairs-in-c/

//https://prnt.sc/hBr7AnM55AEK