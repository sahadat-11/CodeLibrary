//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   	  divs.push_back(i);
   	  if(i != n / i) {
   	  	divs.push_back(n / i);
   	  }
   	}
   }
   if((int)divs.size() % 2) cout << "ODD\n";
   else cout << "EVEN\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int x = sqrtl(n);
   if(x * x == n) {
   	cout << "ODD\n";
   }
   else {
   	cout << "EVEN\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// https://www.geeksforgeeks.org/check-if-total-number-of-divisors-are-even-or-odd/