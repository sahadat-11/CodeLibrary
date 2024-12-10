//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int cnt = 0;
  int fre[k] = {0};
  for(int i = 0; i < n; i++) {
    int rem = a[i] % k;
    cnt += fre[(k - rem) % k];
    fre[rem]++;
  }
  for(int i = 0; i < k; i++) cout << fre[i] << " "; cout << "\n";
  cout << cnt << "\n";
  return 0;
}
