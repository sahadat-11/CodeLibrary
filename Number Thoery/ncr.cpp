//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int f[N], invf[N];

int binexp(int a, int b) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while(b) {
    if(b & 1) {
      ans = (ans * 1ll * a) % mod;
    }
    a = (a * 1ll * a) % mod;
    b >>= 1;
  }
  return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * f[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * f[n] * invf[n - r] % mod;
}

void precal() {
  f[0] = 1;
  for (int i = 1; i < N; i++) {
    f[i] = 1ll * i * f[i - 1] % mod;
  }
  invf[N - 1] = binexp(f[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}
void solve() {
  int n, r; cin >> n >> r;
  cout << nCr(n, r) << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();

  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// problem
// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/ 

// https://prnt.sc/z2NspR7ShbK4
// https://prnt.sc/GRzQPneUZBpc
// https://prnt.sc/X_IGW9oxTP0k
// https://prnt.sc/Esqh6L4MTwNY
// https://prnt.sc/EqH54bMpOFlT
// https://prnt.sc/dwR4S5IBaeNL
// https://prnt.sc/4lAPwqPlDzsU
// https://prnt.sc/uee0Z_aK5Dc2 
// https://prnt.sc/vnN25JBMSk6E