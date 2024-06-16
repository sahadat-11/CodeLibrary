//Your task is to determine the lexicographically 
//minimal rotation of a string.
// https://cses.fi/problemset/task/1110/

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 9;
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

void precal() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = pw[i - 1].first * p1 % mod1;
    pw[i].second = pw[i - 1].second * p2 % mod2;
  }
  ip1 = binexp(p1, mod1 - 2, mod1);
  ip2 = binexp(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = ipw[i - 1].second * ip2 % mod2;
  }
}

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

int lcp(int i, int j, int x, int y) { // O(log n)
  int l = 1, r = min(j - i + 1, y - x + 1), ans = 0;
  while (l <= r) {
    int mid = l + r >> 1;
    if (substr_hash(i, i + mid - 1) == substr_hash(x, x + mid - 1)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return ans;
}
/*
0 = equal
-1 = first one is smaller
1 = first one is larger
*/
string s;
int compare(int i, int j, int x, int y) { // O(log n)
  int lc = lcp(i, j, x, y);
  int len1 = j - i + 1, len2 = y - x + 1;
  if (len1 == len2 and lc == len1) return 0; //equal
  //else if (lc == len1) return -1;
  //else if (lc == len2) return 1;
  else return (s[i + lc] < s[x + lc] ? -1 : 1);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  int n = s.size();
  s += s;
  precal();
  prefix_sum(s);
  int mni = 0, mnj = n - 1;
  for (int i = 1; i < n; i++) {
    int x = compare(mni, mnj, i, i + n - 1);
    if (x == 1) {
      mni = i, mnj = i + n - 1;
    }
  }
  cout << s.substr(mni, n) << '\n';
  return 0;
}


// construct all cyclic shifts, sort them lexicographically, 
//and output the position of the original string in this list.
// 


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
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

void precal() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = pw[i - 1].first * p1 % mod1;
    pw[i].second = pw[i - 1].second * p2 % mod2;
  }
  ip1 = binexp(p1, mod1 - 2, mod1);
  ip2 = binexp(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = ipw[i - 1].second * ip2 % mod2;
  }
}

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

int lcp(int i, int j, int x, int y) { // O(log n)
  int l = 1, r = min(j - i + 1, y - x + 1), ans = 0;
  while (l <= r) {
    int mid = l + r >> 1;
    if (substr_hash(i, i + mid - 1) == substr_hash(x, x + mid - 1)) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return ans;
}
/*
0 = equal
-1 = first one is smaller
1 = first one is larger
*/
string s;
int compare(int i, int j, int x, int y) { // O(log n)
  int lc = lcp(i, j, x, y);
  int len1 = j - i + 1, len2 = y - x + 1;
  if (len1 == len2 and lc == len1) return 0; //equal
  //else if (lc == len1) return -1;
  //else if (lc == len2) return 1;
  else return (s[i + lc] < s[x + lc] ? -1 : 1);
}
int n;
bool cmp(int i, int j) {
  int x = compare(i, i + n - 1, j, j + n - 1);
  if(x == -1) return true;
  return false;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  n = s.size();
  s += s;
  precal();
  prefix_sum(s);
  vector<int> v;
  for(int i = 0; i < n; i++) {
    v.push_back(i);
  }
  sort(v.begin(), v.end(), cmp);
  cout << (find(v.begin(), v.end(), 0) - v.begin() + 1) << "\n";
  return 0;
}


//A cyclic shift of a string s is the string 
//sksk+1sk+2 ... s|s| s1s2 ... sk-1 for some k, 
//where |s| is the length of the string s.
// A substring of the string s is the string 
//sisi+1 ... sj-1sj for some i and j.
// Given two strings a and b, output the number
// of substrings of string a which are cyclic shifts of string b.
// https://acmp.ru/index.asp?main=task&id_task=829&locale=en


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
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

void precal() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = pw[i - 1].first * p1 % mod1;
    pw[i].second = pw[i - 1].second * p2 % mod2;
  }
  ip1 = binexp(p1, mod1 - 2, mod1);
  ip2 = binexp(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = ipw[i - 1].second * ip2 % mod2;
  }
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
  precal();
  cin >> a >> b;
  int n = a.size(), m = b.size();
  b += b;
  A.prefix_sum(a); B.prefix_sum(b);
  set<pair<int, int>> st;

  for(int i = 0; i < m; i++) {
    st.insert(B.substr_hash(i, i + m - 1));
  }
  int cnt = 0;
  for(int i = 0; i + m - 1 < n; i++) {
    auto cur = A.substr_hash(i, i + m - 1);
    if(st.find(cur) != st.end()) {
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
