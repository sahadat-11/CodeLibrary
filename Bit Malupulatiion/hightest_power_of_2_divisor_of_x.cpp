//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int ans = 0;
   for(int i = 0; i < 32; i++) {
      int x = (1 << i);
      if(n % x == 0) {
         ans = x;
      }
   }
   cout << ans << "\n";
   return 0;
}
//O(32)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   cout << (n & ~(n - 1)) << "\n";
   return 0;
}
//O(log2(n))

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int k = __builtin_ctz(n);//tz= trailling zero
   cout << (1 << k) << endl;
   return 0;
}
//O(log2(n))

//https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/
//https://prnt.sc/npYvuyyHrv5c