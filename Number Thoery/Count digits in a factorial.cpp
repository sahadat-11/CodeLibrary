// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
   // int n; cin >> n;
   // double digit = 0;
   // for(int i = 1; i <= n; i++) {
      // digit += log10(i);
   // }
   // cout << (int) floor(digit + 1) << "\n";
   // return 0;
// }
// 

// B base n factorial digit
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
double presum[N];
int main() {
   //int n; cin >> n;
   // cout << (int) floor(log10(n) + 1); // for n number er digits
    // double sum = 0;
   // for(int i = 1; i <= n; i++) {
   //    sum += log10(i);
   // }
   // cout << (int) floor(sum + 1) << "\n"; // for n factorial digits
    //int n, b; cin >> n >> b;
    //cout << (int) floor((log2(n) / log2(b)) + 1);
    // double sum = 0;
    // for(int i = 1; i <= n; i++) {
    //   sum += (log2(i) / log2(b));
    // }
    // cout << (int) floor(sum + 1); // for b base a factoria of n er digits
    for(int i = 1; i < N; i++) {
      presum[i] = presum[i - 1] + log2(i);
    }
    int t; cin >> t;
    int cs = 0;
    while(t--) {
    cout << "Case " << ++cs << ": ";
    int n, b; cin >> n >> b;
    double ans = presum[n] / (log2(b));
    cout << (int) floor(ans + 1) << "\n";
    }
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   double exp = 2.718281828459;
   double pi = 3.141592653589793;
   double x = (n * log10(n / exp) + log10(2 * pi * n) / 2.0);
   cout << floor(x) + 1;
   return 0;
}

//https://www.medcalc.org/manual/exp-function.php#:~:text=EXP(x)%20returns%20the%20natural,function%20of%20the%20LN%20function.
//https://www.geeksforgeeks.org/find-the-length-of-factorial-of-a-number-in-any-given-base/
//https://www.geeksforgeeks.org/count-digits-in-a-factorial-using-logarithm/
// O(1);