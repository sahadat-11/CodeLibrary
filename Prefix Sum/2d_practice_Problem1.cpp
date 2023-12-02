// https://prnt.sc/JJBRt_ZsgvQ_ (problem link)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 7;
ll Pre_sum[N][N];
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
   // for(int i = 1; i <= n; i++) {
   //    for(int j = 1; j <= n; j++) { 
   //       cout << Pre_sum[i][j] << " ";
   //    }
   //    cout << "\n";
   // }
   int q; cin >> q;
   while(q--) {
      int a, b, c, d; cin >> a >> b >> c >> d;
      cout << Pre_sum[c][d] - Pre_sum[a - 1][d] - Pre_sum[c][b - 1] + Pre_sum[a - 1][b - 1] << "\n";
   }
   return 0;
}

// https://prnt.sc/wR_OQB1-zCkP 
// https://youtu.be/nZe7P674xZo?si=XAKvXZkzEU9GLTCe