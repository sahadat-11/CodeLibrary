//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int, int> mp;
  vector<int> ans;
  for(int i = 0; i < k; i++) {
    mp[a[i]]++;
  }
  ans.push_back(mp.size());
  for(int i = k; i < n; i++) {
    int x = a[i - k];
    mp[x]--;
    if(mp[x] == 0) {
        mp.erase(x);
    }
    mp[a[i]]++;
    ans.push_back(mp.size());
  }
  for(auto u : ans) {
    cout << u << " ";
  }
  return 0;
}

// https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/