// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    set<int> st;
//    for(int i = 0; i <= n; i++) {
//    	st.insert((i & n));
//    }
//    for(auto u : st) cout << u << " ";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x; cin >> x;
   vector<int> ans;
   while(x > 0) {
   	ans.push_back(x % 2);
   	x /= 2;
   }
   for(int i = 0; i < ans.size(); i++) {
     if(ans[i] == 1) {
     	cout << i << " ";
     }
   }
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