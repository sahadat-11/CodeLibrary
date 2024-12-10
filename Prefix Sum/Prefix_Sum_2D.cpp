//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e3 + 7;
int pre_sum[N][N];
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m; int a[n + 10][m + 10];
   for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
         cin >> a[i][j];
      }
   }
   for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
         pre_sum[i][j] = pre_sum[i - 1][j] + pre_sum[i][j - 1] + a[i][j] - pre_sum[i - 1][j - 1];
      }
   }

   for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
         cout << pre_sum[i][j] << " ";
      }
      cout << "\n";
   }

   int q; cin >> q;
   while (q--) {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int ans = 0;
    // for (int i = x1; i <= x2; i++) {
    //   for (int j = y1; j <= y2; j++) {
    //     ans += a[i][j];
    //   }
    // }
    ans = pre_sum[x2][y2] - pre_sum[x1 - 1][y2] - pre_sum[x2][y1 - 1] + pre_sum[x1 - 1][y1 - 1];
    cout << ans << '\n';
   }
   return 0;
}

