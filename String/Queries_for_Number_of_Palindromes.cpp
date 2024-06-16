// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 5e3 + 7, mod = 1e9 + 7;
// //#define int long long
// string s;
// int dp[N][N], is_pal[N][N];

// int is_palindrome(int l, int r) {
// 	if(l > r) return true;
// 	int &ans = is_pal[l][r];
// 	if(ans != -1) return ans;
// 	return ans = (s[l] == s[r]) and is_palindrome(l + 1, r - 1);
// }
// int func(int l, int r) {
//   if(l > r) return 0;
//   int &ans = dp[l][r];
//   if(ans != -1) return ans;
//   ans = is_palindrome(l, r);
//   ans += func(l, r - 1) + func(l + 1, r) - func(l + 1, r - 1);
//   return ans;
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> s;
//   memset(dp, -1, sizeof dp);
//   memset(is_pal, -1, sizeof is_pal);
//   int q; cin >> q;
//   while(q--) {
//   	int l, r; cin >> l >> r;
//     l--; r--;
//     cout << func(l, r) << "\n";
//   }
//   return 0;
// }

// // (N * N + Q);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 5e3 + 7, mod = 1e9 + 7;
//#define int long long
string s;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
int dp[N][N];

int binexp(long long a, long long b, int mod) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while (b) {
    if (b & 1) ans = 1ll * ans * a % mod;
    a = 1ll * a * a % mod;
    b >>= 1;
  }
  return ans;
}

int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void precal() { // O(n)
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
  }
  ip1 = binexp(p1, mod1 - 2, mod1);
  ip2 = binexp(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
  }
}

pair<int, int> string_hash(string s) { // O(n)
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += 1LL * s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += 1LL * s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}
struct Hashing {
  pair<int, int> pref[N];
  void prefix_sum(string s) { // O(n)
    int n = s.size();
    for (int i = 0; i < n; i++) {
      pref[i].first = 1LL * s[i] * pw[i].first % mod1;
      if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
      pref[i].second = 1LL * s[i] * pw[i].second % mod2;
      if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
    }
  }
  pair<int, int> substr_hash(int i, int j) { // O(1)
    // assert(i <= j);
    pair<int, int> hs({0, 0});
    hs.first = pref[j].first;
    if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
    hs.first = 1LL * hs.first * ipw[i].first % mod1;
    hs.second = pref[j].second;
    if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
    hs.second = 1LL * hs.second * ipw[i].second % mod2;
    return hs;
  }
}S, R;
int n;
bool is_palindrome(int i, int j) { // O(1)
  return S.substr_hash(i, j) == R.substr_hash(n - j - 1, n - i - 1);
}

int func(int l, int r) {
  if(l > r) return 0;
  int &ans = dp[l][r];
  if(ans != -1) return ans;
  ans = is_palindrome(l, r);
  ans += func(l, r - 1) + func(l + 1, r) - func(l + 1, r - 1);
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  string r = s;
  reverse(r.begin(), r.end());
  n = s.size();
  precal();
  S.prefix_sum(s);
  R.prefix_sum(r);
  
  memset(dp, -1, sizeof dp);
  int q; cin >> q;
  while(q--) {
  	int l, r; cin >> l >> r;
    l--; r--;
    cout << func(l, r) << "\n";
  }
  return 0;
}

// (N * N + Q);