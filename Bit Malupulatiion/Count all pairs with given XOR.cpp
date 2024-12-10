//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  set<int> st;
  for(int i = 0; i < n; i++) {
    int cur_xor = (x ^ a[i]);
    if(st.find(cur_xor) != st.end()) {
      ans++;
    }
    st.insert(a[i]);
  }
  cout << ans << "\n";
  return 0;
}

// https://www.geeksforgeeks.org/count-pairs-given-xor/