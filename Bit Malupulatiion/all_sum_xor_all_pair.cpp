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
//      for(int j = i + 1; j < n; j++) {
//        sum += (a[i] ^ a[j]);
//      }
//    }
//    cout << sum << endl;
//    return 0;
// }

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int ans = 0;
   for(int i = 0; i < 32; i++) {
     int one = 0, zero = 0;
     for(int j = 0; j < n; j++) {
       if(a[j] & (1 << i)) one++;
       else zero++;
     }
     ans += (one * zero * (1 << i));
   }
   cout << ans << endl;
   return 0;
}