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
//    for(int i = 0; i < n - 1; i++) {
//       for(int j = i + 1; j < n; j++) {
//          sum += (a[i] | a[j]);
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
      int set_bit = 0, not_set_bit = 0;
      for(int i = 0; i < n; i++) {
         if((a[i] >> bit) & 1) {
            set_bit++;
         }
         else {
            not_set_bit++;
         }
      }
      // There are k set bits, means k(k-1)/2 pairs.
      // Every pair adds 2^i to the answer. Therefore,
      // we add "2^i * [k*(k-1)/2]" to the answer
      sum += (1 << bit) * (set_bit * (set_bit - 1) / 2) + (1 << bit) * (set_bit * not_set_bit);
   }
   cout << sum << "\n";
   return 0;
}
//O(n * 32);

//https://www.geeksforgeeks.org/sum-of-bitwise-or-of-all-pairs-in-a-given-array/