//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long

bool cmp(pair<int,int> a, pair<int,int> b) {
  return a.second > b.second;
}

void solve() {
   int end; cin >> end; int l, r;
   vector<pair<int,int>> v, ans;
   while(cin >> l >> r) {
      if(l == 0 and r == 0) break;
      v.push_back({l, r});
   }
   int n = v.size();
   sort(v.begin(), v.end(), cmp);
   int start = 0;
   while(start < end) {
      int i = 0;
      for(i = 0; i < n; i++) {
        if(v[i].first <= start and v[i].second > start) {
           ans.push_back(v[i]);
           start = v[i].second;
           break;
        }
      }
      if(i == n) break;
   }
   if(start < end) {
     cout << "0\n";
   }
   else {
     sort(ans.begin(), ans.end());
     cout << ans.size() << "\n";
     for(auto u : ans) {
       cout << u.first << " " << u.second << "\n";
     }
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// it can contain same as one end and another start (>=)