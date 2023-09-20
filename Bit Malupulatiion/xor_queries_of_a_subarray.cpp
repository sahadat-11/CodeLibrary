//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 1];
   for(int i = 0; i < n; i++) cin >> a[i];
   int pre[n] = {0};
   pre[0] = a[0];
   for(int i = 1; i < n; i++) {
     pre[i] = pre[i - 1] ^ a[i];
   }
   // for(int i = 0; i < n; i++) {
   //   cout << pre[i] << " ";
   // }
   int q; cin >> q; 
   while(q--) {
     int l, r; cin >> l >> r;
     if(l == 0) cout << pre[r] << endl;
     else cout << (pre[l - 1]^pre[r]) << endl;
   }
   return 0;
}