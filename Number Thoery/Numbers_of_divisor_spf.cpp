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
   int n; cin >> n; 
   vector<int> cnt(n + 1, 0);
   int div = 1;
   while(n > 1) {
     int k = spf[n];
     cnt[k]++;
     n /= k;
   } 
   //for(auto u : cnt) cout << u << " ";
   for(auto exp : cnt) {
     div *= (exp + 1);
   } 
   cout << div << " ";
   return 0;
}
// https://prnt.sc/Haa8KxQheDg7
// https://prnt.sc/PuqqGQOK4XCP
// https://codeforces.com/problemset/problem/230/B
