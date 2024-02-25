//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
void solve() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = 0;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      sum = (sum + a[i]) % n;
      if(sum == 0) {
        cout << i + 1 << "\n";
        for(int j = 0; j <= i; j++) cout << j + 1 << " ";
        cout << "\n";
        return;
      }
      else if(mp.find(sum) != mp.end()) {
        cout << (i - mp[sum]) << "\n";
        for(int j = mp[sum] + 1; j <= i; j++) cout << j + 1 << " ";
        cout << "\n";
        return;
      }
      else {
        mp[sum] = i;
      }
    }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://www.codechef.com/problems/DIVSUBS?tab=statement
// https://prnt.sc/vntChHvhX2WQ
// https://prnt.sc/iYiwNDw0wb5v
// https://prnt.sc/ufFkNxNW9QP2