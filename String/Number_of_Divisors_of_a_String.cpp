//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
#define int long long

int binexp(int a, int b, int mod) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while (b) {
    if (b & 1) ans = ans * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return ans;
}
 
int ip1, ip2;
pair<int, int> pw[N], ipw[N];

pair<int, int> string_hash(string s) {
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}

pair<int, int> pref[N];
void prefix_sum(string s) {
  int sz = s.size();
  for (int i = 0; i < sz; i++) {
    pref[i].first = s[i] * pw[i].first % mod1;
    if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
    pref[i].second = s[i] * pw[i].second % mod2;
    if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
  }
}

pair<int, int> substr_hash(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pref[j].first;
  if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
  hs.first = hs.first * ipw[i].first % mod1;
  hs.second = pref[j].second;
  if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
  hs.second = hs.second * ipw[i].second % mod2;
  return hs;
}
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // power of p calculate
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = pw[i - 1].first * p1 % mod1;
    pw[i].second = pw[i - 1].second * p2 % mod2;
  }
  
  // inverse of p calculate
  ip1 = binexp(p1, mod1 - 2, mod1);
  ip2 = binexp(p2, mod2 - 2, mod2);

  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = ipw[i - 1].second * ip2 % mod2;
  }

  string a; cin >> a;
  prefix_sum(a);
  int n = a.size(), cnt = 0;
  for (int len = 1; len <= n / 2; len++) {
    bool ok = true;
    for (int i = 0; i + len - 1 < n; i += len) {
      ok &= substr_hash(i, i + len - 1) == substr_hash(0, len - 1);
    }
    cnt += ok;
  }
  cout << cnt + 1 << "\n"; //(+1 for himself)
  return 0;
}

// O(N * log(N))

// Given a string s of size n (1e5)
//Find the number of divisors of s. A string b is a divisor of ss 
//if it is possible to glue bb zero or more times to get the string s. 
//For example, the divisors of abababab are ab, abab and abababab

// https://prnt.sc/p6I4buEO35gV
// https://prnt.sc/3UH2MThLhUb2
// https://prnt.sc/6RisYwjQFrql
// https://prnt.sc/FoN9UxCvpRO4
// https://prnt.sc/uyrG-q6xbvLi
// https://prnt.sc/dlwkheUH5Uh4