//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
#define ll long long
void solve() {
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  set<int> st;
  for(int i = 0; i < n; i++) st.insert(a[i]);
  int id = 0;
  map<int, int> mp;
  for(auto x : st) {
    mp[x] = ++id; // for 1 indexing
  }
  for(int i = 0; i < n; i++) {
    a[i] = mp[a[i]];
    cout << a[i] << " ";
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// it is slower when 10^6;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
#define ll long long
void solve() {
  int n; cin >> n;
  vector<int> a(n); // 100, 9, 10, 10, 9
  for(int i = 0; i < n; i++) cin >> a[i];
  vector<int> b = a;
  sort(b.begin(), b.end()); // 9, 9, 10, 10, 100
  b.resize(unique(b.begin(), b.end()) - b.begin());
  // unique function 9, 10, 100, 9, 10;
  // resize 9, 10, 100;
  for(int i = 0; i < n; i++) {
    a[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1; // for 1 indexing
  }
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// it is faster