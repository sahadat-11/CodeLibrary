//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e6 + 7;
int pre[32][N];
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   for(int bit = 0; bit < 32; bit++) {
   	for(int i = 1; i <= n; i++) { // 1 indexing
   	 pre[bit][i] = ((v[i] >> bit) & 1);
     pre[bit][i] +=pre[bit][i - 1];
   	}
   }
   // for(int bit = 0; bit < 31; bit++) {
   // 	for(int i = 1; i <= n; i++) {
   // 		cout << pre[bit][i] << " ";
   // 	}
   // 	cout << endl;
   // }
   int q; cin >> q;
   while(q--) {
   	int l, r; cin >> l >> r; // 1 indexing
   	int ans = 0;
   	for(int bit = 0; bit < 32; bit++) {
   	  int x = pre[bit][r] - pre[bit][l - 1];
   	  if(x == r - l + 1) {
        ans |= (1 << bit);
   	  }
   	}
   	cout << ans << "\n";
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