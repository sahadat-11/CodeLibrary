//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  if(n == 1) {
    cout << "YES\n";
    cout << x << "\n"; 
    return 0;
  }
  else if(n == 2) {
    if(x == 0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        cout << 0 << " " << x << "\n";
    }
    return 0;
  }
  cout << "YES\n";
  int XOR = 0;
  for(int i = 1; i <= n - 3; i++) {
    XOR ^= i;
    cout << i << " ";
  }
  int k = (1ll << 17), kk = (1ll << 18);
  cout << (x ^ k) << " " << (kk ^ XOR) << " " << (k ^ kk) << "\n";
  return 0;
}