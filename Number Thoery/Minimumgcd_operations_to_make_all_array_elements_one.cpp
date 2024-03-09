//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   int ans = INT_MAX, one = 0;
   for(int i = 0; i < n; i++) {
   	 cin >> v[i];
   	 if(v[i] == 1) one++;
   }
   if(one != 0) {
   	cout << n - one;
   	return ;
   }
   int minimum = INT_MAX;
   for(int i = 0; i < n; i++) {
   	 int gcd = v[i];
   	 for(int j = i + 1; j < n; j++) {
        gcd = __gcd(gcd, v[j]); 
       	if(gcd == 1) {
       	  minimum = min(minimum, j - i);
       	  break;
       	}
   	 }
   }
   if(minimum == INT_MAX) {
   	cout << "-1\n";
   }
   else {
   	cout << n + minimum - 1;
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

// Time Complexity: O(n2*log(n))

