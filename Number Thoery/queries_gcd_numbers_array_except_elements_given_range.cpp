//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   vector<int>pre(n), suf(n);
   pre[0] = v[0];
   for(int i = 1; i < n; i++) {
   	pre[i] = __gcd(pre[i - 1], v[i]);
   }
   suf[n - 1] = v[n - 1];
   for(int i = n - 2; i >= 0; i--) {
   	suf[i] = __gcd(suf[i + 1], v[i]);
   }
   int q; cin >> q;
   while(q--) {
   	int l, r; cin >> l >> r;
   	if(l == 0) {
   		cout << suf[r + 1] << "\n";
   	}
   	else if(r == n - 1) {
   		cout << pre[l - 1] << "\n";
   	}
   	else {
   	   cout << __gcd(pre[l - 1], suf[r + 1]) << "\n";
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

// Time Complexity: O(nlogn) 