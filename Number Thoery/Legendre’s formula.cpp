//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, p; cin >> n >> p;
  int ans = 0;
  while(n) {
    ans += n / p;
    n /= p;
    //cout << ans <<"\n";
  }
  cout << ans << "\n";
  return 0;
}
// // https://prnt.sc/aeAeedNeIxUW 

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   int n, p; cin >> n >> p;
      int power_of_p = 0;
      for(int i = p; i <= n; i += p) { 
          int x = i;
          while(x % p == 0) {
            power_of_p++;
            x /= p;
          }
      }
      cout << power_of_p << endl;
   }
    return 0;
}


