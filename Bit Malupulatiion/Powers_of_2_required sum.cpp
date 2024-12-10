//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 0; i < 30; i++) {
    if((1LL << i) & n) {
        cout << i << " ";
    }
  }
  return 0;
}