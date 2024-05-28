//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b, k; cin >> a >> b >> k;
   int n = __gcd(a, b);
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   	  divs.push_back(i);
   	  if(i != n / i) {
   	  	divs.push_back(n / i);
   	  }
   	}
   }
   sort(divs.begin(), divs.end());
   if(k > (int)divs.size()) {
   	cout << "-1\n";
   }
   else {
   	cout << divs[k - 1] << "\n";
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