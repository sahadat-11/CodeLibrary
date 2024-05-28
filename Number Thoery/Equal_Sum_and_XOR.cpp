//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int i = 0; i <= n; i++) {
      if((n + i) == (n ^ i)) {
         cout << i << endl;
         cnt++;
      }
   }
   cout << cnt << "\n";
   return 0;
}

//O(n)


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int unset_bit = 0;
   while(n) {
      if((n & 1) == 0) {
         unset_bit++;
      }
      n >>= 1;
   }
   cout << (1 << unset_bit);
   return 0;
}

//O(log(n))
//https://www.geeksforgeeks.org/equal-sum-xor/
//https://prnt.sc/nmb1rFyhtd0O