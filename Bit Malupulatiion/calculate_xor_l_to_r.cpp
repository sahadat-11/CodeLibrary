//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int claculate(int n) {
   int mod = n % 4;
   if(mod == 0) return n;
   else if(mod == 1) return 1;
   else if(mod == 2) return n + 1;
   return 0;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int l, r; cin >> l >> r;
   int x = claculate(l - 1);
   int y = claculate(r);
   int ans = x ^ y;
   cout << ans << endl;
   return 0;
}
// O (1);