// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n; cin >> n; int a[n];
//    for(int i = 0; i < n; i++) cin >> a[i];
//    int sum = 0;
//    for(int i = 0; i < n; i++) {
//       for(int j = i; j < n; j++) {
//          int XOR = a[i] ^ a[j];
//          int cnt = __builtin_popcount(XOR);
//          sum += (2 * cnt); // pair(a, b and b, a);
//       }
//    }
//    cout << sum << "\n";
//    return 0;
// }
//O(n * n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int sum = 0;
   for(int bit = 0; bit < 32; bit++) {
      int set_bit = 0, unset_bit = 0;
      for(int i = 0; i < n; i++) {
         if((a[i] >> bit) & 1) {
            set_bit++;
         }
         else {
            unset_bit++;
         }
      }
      sum += (set_bit * (unset_bit) * 2);
   }
   cout << sum << "\n";
   return 0;
}
//O(n * 32);

//https://www.geeksforgeeks.org/sum-of-bit-differences-among-all-pairs/
