//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e4 + 8;
bitset < N > f; // initially false;
void sieve() {
  f[0] = f[1] = true;
  for (int i = 4; i <= N; i += 2) f[i] = true;
  for (int i = 3; i * i <= N; i += 2) {
    if (!f[i]) {
      for (int j = i * i; j <= N; j += 2 * i) f[j] = true;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  vector < int > prime;
  for (int i = 2; i <= N; i++) {
    if (!f[i]) prime.push_back(i);
  }
  int t; cin >> t;
  int cs = 0;
  while (t--) {
    int m, n;
    cin >> m >> n;
    cout << "Case " << ++cs << ":\n";
    int ans = INT_MAX;
    for (auto p: prime) {
      if (p > m) break;
      if (m % p == 0) {
        int exp = 0;
        while (m % p == 0) {
          exp++;
          m /= p;
        }
        int power_of_p_in_factorial = 0;
        for (int i = p; i <= n; i += p) {
          int x = i;
          while (x % p == 0) {
            power_of_p_in_factorial++;
            x /= p;
          }
        }
        ans = min(ans, power_of_p_in_factorial / exp);
      }
    }
    if(ans == 0) cout << "Impossible to divide\n";
    else cout << ans << "\n";
  }
  return 0;
}
// https://prnt.sc/DEDg3uy60pqn
// https://prnt.sc/hV_haZ049D69