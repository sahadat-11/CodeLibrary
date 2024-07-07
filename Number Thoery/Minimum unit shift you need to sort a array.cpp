//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0, pos = n;
  for(int i = 1; i < n; i++) {
    if(a[i] < a[i - 1]) {
      cnt++;
      pos = i;
    }
  }
  if(a[n - 1] > a[0]) cnt++;
  if(cnt > 1) cout << "-1\n";
  else cout << n - pos << "\n";
  return 0;
}