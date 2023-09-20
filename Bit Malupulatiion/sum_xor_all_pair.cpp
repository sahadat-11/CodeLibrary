//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int XOR = 0;
   for(int i = 0; i < n; i++) {
     XOR = XOR^(2 * a[i]);
   }
   cout << XOR << endl;
   return 0;
}