//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll sum = 0;
   for(int i = 0; i < n; i++) {
      sum += (v[i] * (i + 1) * (n - i));
   }
   cout << sum << "\n";
   return 0;
}
//https://prnt.sc/dn7oDHrqFNwy
//https://www.geeksforgeeks.org/sum-of-all-subarrays/
