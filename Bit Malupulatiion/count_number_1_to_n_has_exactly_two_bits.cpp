//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      for(int i = 1; i <= n; i++) {
         int x = __builtin_popcountll(i);
         if(x == 2) {
            cout << x << " ";
         }
      }
      cout << "\n";
   }
   return 0;
}
