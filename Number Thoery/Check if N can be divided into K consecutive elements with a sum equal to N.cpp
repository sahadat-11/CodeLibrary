//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long

void check(int n) {
  for(int i = 2; ; i++) {
    int s = i * (i + 1) / 2;
    if(s > n) break;
    int k = n - s;
    if(k % i) continue; // if rem er man thakle ta n er equal hobe na;
    cout << i << "\n";
    return;
  }
  cout << - 1 << "\n";
}
int32_t main() {
  int n; cin >> n;
  check(n);
  return 0;
}
