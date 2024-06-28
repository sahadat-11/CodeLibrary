//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e7 + 7;
map<int, bool> perfect_square;
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   sort(a.begin(), a.end());
   int mx = a[n - 1] + a[n - 2];
   int cnt = 0;
   map<int, bool> mp;
   for(int i = 0; i < n; i++) {
    mp[a[i]] = true; 
   }
   for(int i = 0; i < n; i++) {
     for(int j = 1; j * j <= mx; j++) {
        int x = j * j;
        if(mp[x - a[i]]) {
          cout << x << " " << a[i] << endl;
          cnt++;
        }
     }
   }
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // for(int i = 1; i < N; i++) {
  // 	perfect_square[i * i] = true;
  // }
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}