//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   int mask = ~(1 << k);
   n = (n & mask);
   cout << n << endl;
   
    
   int n, k; cin >> n >> k;
   cout << (n & (~(1LL << k)));
   
   return 0;
}
// https://prnt.sc/6uoXTbSOb_Y9