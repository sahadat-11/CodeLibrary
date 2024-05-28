 //In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  vector<int> trees(n + 1);
  for(int i = 1; i <= n; i++) cin >> trees[i];
  queue<int> q;
  map<int, int> dis;
  for(int i = 1; i <= n; i++) {
    q.push(trees[i]);
    dis[trees[i]] = 0;
  }
  vector<int> ans;
  int sum = 0;
 
  while(!q.empty() and m) {
    int u = q.front();
    q.pop();
    if(dis.find(u + 1) == dis.end() and m) {
      dis[u + 1] = dis[u] + 1;
      q.push(u + 1);
      m--;
      ans.push_back(u + 1);
      sum += dis[u + 1];
    }
    if(dis.find(u - 1) == dis.end() and m) {
      dis[u - 1] = dis[u] + 1;
      q.push(u - 1);
      m--;
      ans.push_back(u - 1);
      sum += dis[u - 1];
    }
  }
  cout << sum << "\n";
  for(auto p : ans) cout << p << " ";
  return 0;
}

// https://codeforces.com/contest/1283/problem/D