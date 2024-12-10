//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int digit_root(int n) {
  if(n < 10) return n;
  int sum = 0;
  while(n) {
  	sum += n % 10;
  	n /= 10;
  }
  return digit_root(sum);
}
void solve() {
   for(int i = 1; i < 100; i++) {
   	 cout << digit_root(i) << "\n";
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
//1 to 100 digit root; see that one root repeat after 9 times;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int k, x; cin >> k >> x;
   cout << (k - 1) * 9 + x << "\n";
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
// https://prnt.sc/Ld1aEXz2h2Mg