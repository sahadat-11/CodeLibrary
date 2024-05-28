//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 7;
int Pre_sum[N][N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 10][n + 10];
   for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n; j++) {
         cin >> a[i][j];
      }
   }
   for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n; j++) {
         Pre_sum[i][j] = Pre_sum[i - 1][j] + Pre_sum[i][j - 1] + a[i][j] - Pre_sum[i - 1][j - 1];
      }
   }

   for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n; j++) {
         cout << Pre_sum[i][j] << " ";
      }
      cout << "\n";
   }
   return 0;
}

