// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 7, mod = 1e9 + 7;
// #define int long long
// int f[N], invf[N];

// int binexp(int a, int b) {
//   int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
//   while(b) {
//     if(b & 1) {
//       ans = (ans * 1ll * a) % mod;
//     }
//     a = (a * 1ll * a) % mod;
//     b >>= 1;
//   }
//   return ans;
// }

// int nCr(int n, int r) {
//   if (n < r or n < 0) return 0;
//   return 1ll * f[n] * invf[r] % mod * invf[n - r] % mod;
// }

// int nPr(int n, int r) {
//   if (n < r or n < 0) return 0;
//   return 1ll * f[n] * invf[n - r] % mod;
// }

// void precal() {
//   f[0] = 1;
//   for (int i = 1; i < N; i++) {
//     f[i] = 1ll * i * f[i - 1] % mod;
//   }
//   invf[N - 1] = binexp(f[N - 1], mod - 2);
//   for (int i = N - 2; i >= 0; i--) {
//     invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
//   }
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   precal();

//   int t;
//   while(cin >> t) {
//     int n; cin >> n;
//     vector<int> a(n);
//     for(int i = 0; i < n; i++) {
//       cin >> a[i];
//     }
//     int sum = 0;
//     int ans = 1;
//     for(int i = 0; i < n; i++) {
//       ans = (ans * nCr(t - sum, a[i])) % mod;
//       sum += a[i];
//     }
//     cout << ans << "\n";
//   }
//   return 0;
// }
// // Its not working for we cannot use mod

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105, mod = 1e9 + 7;
#define int long long
int C[N][N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 0; i < N; i++) {
    C[i][i] = 1;
    for(int j = 0; j < i; j++) {
      C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
    }
  }
  int n;
  while(cin >> n) {
    int k; cin >> k;
    int ans = 1;
    for(int i = 1; i <= k; i++) {
      int z; cin >> z;
      ans = ans * C[n][z];
      n -= z;
    }
    cout << ans << "\n";
  }
  return 0;
}

// it is not overflow because they told that 
// answer less than 10^9