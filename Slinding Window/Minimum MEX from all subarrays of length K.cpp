//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 7, mod = 1e9 + 7;
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
  map<int, int> cnt;
  for(int i = 0; i <= n; i++) {
    st.insert(i);
  }
  for(int i = 0; i < k; i++) {
    st.erase(a[i]);
    cnt[a[i]]++;
  }
  int mn = *st.begin();
  for(int i = k; i < n; i++) {
    int outgoing = a[i - k];
    cnt[outgoing]--;
    if (cnt[outgoing] == 0) {
        st.insert(outgoing);
    }
    int incoming = a[i];
    cnt[incoming]++;
    st.erase(incoming);
    mn = min(mn, *st.begin());
  }
  cout << mn << "\n";
  return 0;
}


// https://atcoder.jp/contests/abc194/tasks/abc194_e