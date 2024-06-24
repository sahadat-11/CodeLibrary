//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> p(n);
   for(int i = 0; i < n; i++) {
      p[i] = i + 1;
   }
   do {
     for(int i = 0; i < n; i++) cout << p[i] << " "; cout << "\n";
   } while(next_permutation(p.begin(), p.end()));
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

// https://atcoder.jp/contests/abc145/tasks/abc145_c
// https://atcoder.jp/contests/abc150/tasks/abc150_c?lang=en
// https://atcoder.jp/contests/abc215/tasks/abc215_c