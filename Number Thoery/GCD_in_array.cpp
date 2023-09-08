//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int g = a[0];
   for(int i = 1; i < n; i++) {
     g = __gcd(g, a[i]);
   }
   cout << g << "\n";
   return 0; 
}
