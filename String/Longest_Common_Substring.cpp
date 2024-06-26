// Longest Common Substring between two Strings;

//In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 9;
// const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
// #define int long long

// int binexp(int a, int b, int mod) {
//   int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
//   while (b) {
//     if (b & 1) ans = ans * a % mod;
//     a = a * a % mod;
//     b >>= 1;
//   }
//   return ans;
// }
 
// int ip1, ip2;
// pair<int, int> pw[N], ipw[N];

// pair<int, int> string_hash(string s) {
//   int n = s.size();
//   pair<int, int> hs({0, 0});
//   for (int i = 0; i < n; i++) {
//     hs.first += s[i] * pw[i].first % mod1;
//     hs.first %= mod1;
//     hs.second += s[i] * pw[i].second % mod2;
//     hs.second %= mod2;
//   }
//   return hs;
// }

// pair<int, int> pref[N];
// void prefix_sum(string s) {
//   int n = s.size();
//   for (int i = 0; i < n; i++) {
//     pref[i].first = s[i] * pw[i].first % mod1;
//     if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
//     pref[i].second = s[i] * pw[i].second % mod2;
//     if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
//   }
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   // power of p calculate
//   pw[0] =  {1, 1};
//   for (int i = 1; i < N; i++) {
//     pw[i].first = pw[i - 1].first * p1 % mod1;
//     pw[i].second = pw[i - 1].second * p2 % mod2;
//   }
//   // inverse of p calculate
//   ip1 = binexp(p1, mod1 - 2, mod1);
//   ip2 = binexp(p2, mod2 - 2, mod2);
//   ipw[0] =  {1, 1};
//   for (int i = 1; i < N; i++) {
//     ipw[i].first = ipw[i - 1].first * ip1 % mod1;
//     ipw[i].second = ipw[i - 1].second * ip2 % mod2;
//   }

//   string a, b; cin >> a >> b;
//   prefix_sum(a);
//   set<pair<int, int>> st;
//   for(int i = 0; i < a.size(); i++) {
//     string sbst;
//     for(int j = i; j < a.size(); j++) {
//       sbst += a[j];
//       st.insert(string_hash(sbst));
//     }
//   }
//   //for(auto u : st) cout << u.first << endl;
//   int ans = 0;
//   for(int i = 0; i < b.size(); i++) {
//     string sbst;
//     for(int j = i; j < b.size(); j++) {
//       sbst += b[j];
//       if(st.find(string_hash(sbst)) != st.end()) {
//         ans = max(ans, (int)sbst.size());
//       }
//     }
//   }
//   cout << ans << "\n";
//   return 0;
// }
// // (n * n * log(n * n));



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

string a, b, ans; 
int ip1, ip2, n;
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

bool isvalid(int len) {
  set<pair<int,int>> st;// because hash is pair
  for(int i = 0; i + len - 1 < n; i++) {
    st.insert(substr_hash_a(i, i + len - 1));
  }
  for(int i = 0; i + len - 1 < n; i++) {
    if(st.find(substr_hash_b(i, i + len - 1)) != st.end()) {
      ans = b.substr(i, len);
      return true;
    }
  }
  return false;
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

  cin >> n >> a >> b;
  prefix_sum1(a); prefix_sum2(b);
  int l = 1, r = n;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(isvalid(mid)) {
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}


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

string a, b, ans;

bool isvalid(int len) {
  set<pair<int,int>> st;// because hash is pair
  for(int i = 0; i + len - 1 < n; i++) {
    st.insert(A.substr_hash(i, i + len - 1));
  }
  for(int i = 0; i + len - 1 < n; i++) {
    if(st.find(B.substr_hash(i, i + len - 1)) != st.end()) {
      ans = b.substr(i, len);
      return true;
    }
  }
  return false;
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
  cin >> n >> a >> b;
  A.prefix_sum(a); B.prefix_sum(b);
  int l = 1, r = n;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(isvalid(mid)) {
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}


// (N * log(N * N));
// https://acm.timus.ru/problem.aspx?space=1&num=1517

// https://prnt.sc/p6I4buEO35gV
// https://prnt.sc/3UH2MThLhUb2
// https://prnt.sc/6RisYwjQFrql
// https://prnt.sc/FoN9UxCvpRO4
// https://prnt.sc/uyrG-q6xbvLi
// https://prnt.sc/dlwkheUH5Uh4