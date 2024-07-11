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
  set<int> st;
  for(int i = 0; i <= n; i++) {
    st.insert(i);
  }
  for(int i = 0; i < k; i++) {
    st.erase(a[i]);
  }
  int mx = *(st.begin());
  for(int i = k; i < n; i++) {
    st.erase(a[i]);
    st.insert(a[i - k]);
    int x = *(st.begin());
    mx = max(mx, x);
  }
  cout << mx << "\n";
  return 0;
}

// https://www.geeksforgeeks.org/maximum-mex-from-all-subarrays-of-length-k/