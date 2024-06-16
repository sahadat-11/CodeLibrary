// Longest Common Prefix between two Strings;


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

string a, b; 
int ip1, ip2;
pair<int, int> pw[N], ipw[N];

pair<int, int> pref1[N];
void prefix_sum1(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    pref1[i].first = s[i] * pw[i].first % mod1;
    if (i) pref1[i].first = (pref1[i].first + pref1[i - 1].first) % mod1;
    pref1[i].second = s[i] * pw[i].second % mod2;
    if (i) pref1[i].second = (pref1[i].second + pref1[i - 1].second) % mod2;
  }
}

pair<int, int> substr_hash_a(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pref1[j].first;
  if (i) hs.first = (hs.first - pref1[i - 1].first + mod1) % mod1;
  hs.first = hs.first * ipw[i].first % mod1;
  hs.second = pref1[j].second;
  if (i) hs.second = (hs.second - pref1[i - 1].second + mod2) % mod2;
  hs.second = hs.second * ipw[i].second % mod2;
  return hs;
} 

pair<int, int> pref2[N];

void prefix_sum2(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    pref2[i].first = s[i] * pw[i].first % mod1;
    if (i) pref2[i].first = (pref2[i].first + pref2[i - 1].first) % mod1;
    pref2[i].second = s[i] * pw[i].second % mod2;
    if (i) pref2[i].second = (pref2[i].second + pref2[i - 1].second) % mod2;
  }
}

pair<int, int> substr_hash_b(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pref2[j].first;
  if (i) hs.first = (hs.first - pref2[i - 1].first + mod1) % mod1;
  hs.first = hs.first * ipw[i].first % mod1;
  hs.second = pref2[j].second;
  if (i) hs.second = (hs.second - pref2[i - 1].second + mod2) % mod2;
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

  cin >> a >> b;
  prefix_sum1(a); prefix_sum2(b);
  int l = 1, r = min(a.size(), b.size()), ans = 0;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(substr_hash_a(0, mid - 1) == substr_hash_b(0, mid - 1)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}
// (n * log(n * n));


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
#define int long long
int n;

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

struct Hasing {
  pair<int, int> pref[N];
  void prefix_sum(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
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
}A, B;

string a, b;

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
  cin >> a >> b;
  A.prefix_sum(a); B.prefix_sum(b);
  n = min(a.size(), b.size());
  int l = 1, r = n, ans = 0;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(A.substr_hash(0, mid - 1) == B.substr_hash(0, mid - 1)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}
