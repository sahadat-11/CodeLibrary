//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int XOR = 0; // initially 0 because a^0 = a;
   for(int i = 0; i < n; i++) {
      XOR ^= a[i];
   }
   cout << XOR << endl;
   return 0;
}
// O(n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
   }
   for(auto u : mp) {
      if(u.second == 1) {
         cout << u.first << endl;
      }
   }
   
   return 0;
}
// O(n log(n));