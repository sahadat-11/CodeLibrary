//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int pos = -1, cnt = 0;
   while(n) {
     if(n & 1) {
        pos = cnt;
     }
     cnt++;
     n >>= 1;
   }
   cout << pos << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int pos = -1;
   for(int i = 0; i < 32; i++) {
     int mask = (1 << i);
     if(mask & n) {
        pos = i;
     }
   }
   cout << pos << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int k = 31 - (__builtin_clz(n));// for 0 index;(32 bit int)
   int k = 63 - (__builtin_clzll(n));// for 0 index;(64 bit long)
   cout << k << endl;
   return 0;
}
//https://www.geeksforgeeks.org/smallest-power-of-2-greater-than-or-equal-to-n/