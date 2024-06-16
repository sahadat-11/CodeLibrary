//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1), dif(n + 2);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i < n; i++) {
  	dif[i] = a[i + 1] - a[i];
  }
  // for(int i = 1; i < n - 1; i++) {
  // 	cout << dif[i] << " ";
  // }
  int ans = 1, cnt = 1;
  for(int i = 1; i < n - 1; i++) {
  	if(dif[i] == dif[i + 1]) {
  	  cnt++;
  	  ans = max(ans, cnt);
  	}
  	else {
  	  cnt = 1;
  	}
  }
  cout << ans + 1 << "\n";
  return 0;
}