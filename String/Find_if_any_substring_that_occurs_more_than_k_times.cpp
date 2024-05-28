//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a; cin >> a;
  int k; cin >> k;
  map<char, int> mp;
  for(auto u : a) mp[u]++;
  for(auto u : mp) {
    if(u.second >= k) {
      cout << u.first << "\n";
      break;
    }
  }
  return 0;
}