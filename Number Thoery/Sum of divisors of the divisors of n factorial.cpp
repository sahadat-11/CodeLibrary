//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7;
int divs[N], pre[N];

int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
     for(int j = i; j < N; j += i) {
       divs[j]++;
     }
   }
   for(int i = 1; i < N; i++) {
    pre[i] = pre[i - 1] + divs[i];
   }
   int n; cin >> n;
   cout << pre[n] << "\n";
   return 0;
}
