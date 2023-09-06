//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
       for(int j = i; j < N; j += i) {
         spf[j] = min(spf[j], i);
       }
     }
   }
   int q; cin >> q;
   while(q--) {
      int n; cin >> n;
      vector<int> ans;
      while(n > 1) {
         int k = spf[n];
         ans.push_back(k);
         n /= k;
      }
      for(auto u : ans) cout << u << " "; cout << "\n";
   }
   return 0;
}
// complexity O(nlogn)