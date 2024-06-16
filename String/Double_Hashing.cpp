//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7;
const int p1 = 137, mod1 = 1e9 + 7, p2 = 277, mod2 = 1e9 + 9;
int pw1[N], pw2[N];

pair<int, int> hsh(string s) {
  int res1 = 0, res2 = 0;
  for(int i = 0; i < (int)s.size(); i++) {
    res1 += s[i] * pw1[i]; //s[i] automatically ascii
    res1 %= mod1;
  }
  for(int i = 0; i < (int)s.size(); i++) {
    res2 += s[i] * pw2[i]; //s[i] automatically ascii
    res2 %= mod2;
  }
  return {res1, res2};
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  pw1[0] = 1;
  for(int i = 1; i < N; i++) {
    pw1[i] = pw1[i - 1] * p1 % mod1;
  }

  pw2[0] = 1;
  for(int i = 1; i < N; i++) {
    pw2[i] = pw2[i - 1] * p2 % mod2;
  }

  string a, b; cin >> a >> b; 
  if(hsh(a) == hsh(b)) cout << "Equal";
  else cout << "Not Equal";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7;
const int p1 = 137, mod1 = 1e9 + 7, p2 = 277, mod2 = 1e9 + 9;
int pw1[N], pw2[N];

int hsh(string s) {
  int res1 = 0, res2 = 0;
  for(int i = 0; i < s.size(); i++) {
    res1 += s[i] * pw1[i]; //s[i] automatically ascii
    res1 %= mod1;
  }
  for(int i = 0; i < s.size(); i++) {
    res2 += s[i] * pw2[i]; //s[i] automatically ascii
    res2 %= mod2;
  }
  return res1 * mod2 + res2;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  pw1[0] = 1;
  for(int i = 1; i < N; i++) {
    pw1[i] = pw1[i - 1] * p1 % mod1;
  }

  pw2[0] = 1;
  for(int i = 1; i < N; i++) {
    pw2[i] = pw2[i - 1] * p2 % mod2;
  }

  string a, b; cin >> a >> b; 
  if(hsh(a) == hsh(b)) cout << "Equal";
  else cout << "Not Equal";
  return 0;
}

// You are given n (5e3) strings each of size m (5e3). 
// Find the number of unique strings in 1s.

// https://prnt.sc/p6I4buEO35gV
// https://prnt.sc/3UH2MThLhUb2
// https://prnt.sc/6RisYwjQFrql
// https://prnt.sc/FoN9UxCvpRO4
// https://prnt.sc/uyrG-q6xbvLi
// https://prnt.sc/dlwkheUH5Uh4