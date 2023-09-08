//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int lcmfind(int a, int b) {
  return (a / (__gcd(a, b)) * b);
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int lcm = 1;
   for(int i = 0; i < n; i++) {
     lcm = lcmfind(lcm, a[i]);
   }
   cout << lcm << "\n";
   return 0; 
}
