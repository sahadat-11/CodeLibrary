//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cur_sum = 0, min_len = n + 1;
  int start = 0, end = 0;
  while(cur_sum <= x and end < n) {
  	cur_sum += a[end++];
  	if(cur_sum < 0) {
  	  cur_sum = 0;
  	  start = end;
  	}
    while(cur_sum > x and start < n) {
      if(end - start < min_len) {
      	min_len = end - start;
      }
      cur_sum -= a[start++];
    }
  }
  cout << min_len << "\n";
  return 0;
}

// only for positive