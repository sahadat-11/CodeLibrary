//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   double digit = 0;
   for(int i = 1; i <= n; i++) {
      digit += log10(i);
   }
   cout << (int) floor(digit + 1) << "\n";
   return 0;
}
