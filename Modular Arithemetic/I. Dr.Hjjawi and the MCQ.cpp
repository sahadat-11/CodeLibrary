//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; 
  string s; cin >> s;
  map<char, int> mp;
  for(auto u : s) mp[u]++;
  int mx = 0, mn = INT_MAX;
  for(int c = 'a'; c <= 'e'; c++) {
  	mx = max(mx, mp[c]);
  	mn = min(mn, mp[c]);
  }
  cout << mn << " " << mx << "\n";
  return 0;
}
