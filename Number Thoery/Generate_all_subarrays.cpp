//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int i = 0; i < n; i++) {
      for(int j = i; j < n; j++) {
         for(int k = i; k <= j; k++) {
            cout << v[k] << " ";
         }
         cout << "\n";
      }
   }
   return 0;
}
//O(2 ^ n)
//https://www.geeksforgeeks.org/subarraysubstring-vs-subsequence-and-programs-to-generate-them/