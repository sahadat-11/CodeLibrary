// statement: l to r not including conting gcd in array;
// that means calculate gcd excluding l to r;


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   int q; cin >> q;
   while(q--) {
      int l, r; cin >> l >> r;
      int g = 0;
      for(int i = 1; i < l; i++) { 
         g = __gcd(g, a[i]);
      }
      for(int i = r + 1; i <= n; i++) {
         g = __gcd(g, a[i]);
      }
      cout << g << "\n";
   }
   return 0;
}
// O(test * n * q);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, q; cin >> n >> q; int a[n + 1];
   int forward[n + 2] = {0}, backward[n + 2] = {0};
   for(int i = 1; i <= n; i++) cin >> a[i];
   for(int i = 1; i <= n; i++) {
      forward[i] = __gcd(forward[i - 1], a[i]);
   }
   for(int i = n; i >= 1; i--) {
      backward[i] = __gcd(backward[i + 1], a[i]);
   }
   while(q--) {
      int l, r; cin >> l >> r;
      int gc = __gcd(forward[l - 1], backward[r + 1]);
      cout << gc << "\n";
   }
   }
   
   return 0;
}
// O(test * q);