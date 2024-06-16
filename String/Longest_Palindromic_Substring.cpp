//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;

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
void prec() { // O(n)
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
int odd[N]; // maximum length of an odd palidrome centered at i is [i - odd[i], i + odd[i]]
int even[N]; // maximum length of an even palindrome center at (i - 1, i) is [i - even[i], i + even[i] - 1]

bool is_palindrome(int i, int j) { // O(1)
  return S.substr_hash(i, j) == R.substr_hash(n - j - 1, n - i - 1);
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  prec();
  string s; cin >> s;
  string r = s;
  reverse(r.begin(), r.end());
  n = s.size();

  S.prefix_sum(s);
  R.prefix_sum(r);

  for (int center = 0; center < n; center++) {
    int l = 0, r = min(center, n - center - 1), ans = 0;
    while (l <= r) {
      int mid = (l + r) >> 1;
      if (is_palindrome(center - mid, center + mid)) {
        ans = mid;
        l = mid + 1;
      }
      else {
        r = mid - 1;
      }
    }
    odd[center] = ans;
  }
  
  // assume left is center
  for (int center = 0; center < n; center++) {
    int l = 0, r = min(center, n - center), ans = 0;
    while (l <= r) {
      int mid = (l + r) >> 1;
      if (is_palindrome(center - mid, center + mid - 1)) {
        ans = mid;
        l = mid + 1;
      }
      else {
        r = mid - 1;
      }
    }
    even[center] = ans;
  }

  int max_pal_length = 0, ans_l, ans_r;
  for (int i = 0; i < n; i++) {
    int len = 2 * odd[i] + 1;
    if (len > max_pal_length) {
      max_pal_length = len;
      ans_l = i - odd[i], ans_r = i + odd[i];
    }
  }
  for (int i = 0; i < n; i++) {
    int len = 2 * even[i];
    if (len > max_pal_length) {
      max_pal_length = len;
      ans_l = i - even[i], ans_r = i + even[i] - 1;
    }
  }
  cout << s.substr(ans_l, ans_r - ans_l + 1) << '\n';
  return 0;
}
// O(n logn)

// https://cses.fi/problemset/task/1111