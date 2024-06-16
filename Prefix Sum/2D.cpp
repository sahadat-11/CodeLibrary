 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int row, col; cin >> row >> col; int a[row][col];
   int pre[row][col] = {0};
   for(int i = 0; i < row; i++) {
   	 for(int j = 0; j < col; j++) cin >> a[i][j];
   }
   pre[0][0] = a[0][0];
   for(int i = 1; i < col; i++) pre[0][i] = pre[0][i - 1] + a[0][i];
   for(int i = 1; i < row; i++) pre[i][0] = pre[i - 1][0] + a[i][0];
   // for(int i = 0; i < row; i++) {
   	 // for(int j = 0; j < col; j++) cout << pre[i][j] << " ";
   	 // cout << "\n";
   // }
   for(int i = 1; i < row; i++) {
   	 for(int j = 1; j < col; j++) pre[i][j] = pre[i][j - 1] + pre[i - 1][j] + a[i][j] - pre[i - 1][j - 1];
   }
    for(int i = 0; i < row; i++) {
   	 for(int j = 0; j < col; j++) cout << pre[i][j] << " ";
   	 cout << "\n";
    }
   return 0;
}

n
 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int row, col; cin >> row >> col; int a[row][col];
   for(int i = 0; i < row; i++) {
   	 for(int j = 0; j < col; j++) cin >> a[i][j];
   }
   //vertical prefixsum
    for (int j = 0; j < col; j++) {
        for (int i = 1; i < row; i++) {
            a[i][j] += a[i-1][j];
        }
    }
    //horizontal prefixsum
    for (int i = 0; i < row; i++) {
        for (int j = 1; j < col; j++) {
            a[i][j] += a[i][j-1];
        }
    }
   for(int i = 0; i < row; i++) {
   	 for(int j = 0; j < col; j++) cout << a[i][j] << " ";
   	 cout << "\n";
   }
   return 0;
}
