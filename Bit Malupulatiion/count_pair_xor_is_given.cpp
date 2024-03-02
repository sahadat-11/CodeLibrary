//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int cnt = 0;
   for(int i = 0; i < n; i++) {
   	for(int j = i + 1; j < n; j++) {
   	  if((v[i] ^ v[j]) == x) cnt++;
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

// // O(n^2)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   int cnt = 0;
   for(int i = 0; i < n; i++) {
     int cur_xor = (v[i] ^ x);
     cnt += mp[cur_xor];
     mp[v[i]]++;
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

// O(n * log(n))