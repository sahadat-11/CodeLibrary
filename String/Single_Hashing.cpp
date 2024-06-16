//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, mod = 1e9 + 7, p = 137;
int pw[N];
void pre() {
   pw[0] = 1;
   for(int i = 1; i < N; i++) {
    pw[i] = 1ll * pw[i - 1] * p % mod;
   }
}
int hsh(string s) {
  int res = 0;
  for(int i = 0; i < s.size(); i++) {
    res += 1ll * s[i] * pw[i]; //s[i] automatically ascii
    res %= mod;
  }
  return res;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  pre();
  cout << hsh(a) << " " << hsh(b) << endl;
  if(hsh(a) == hsh(b)) cout << "Equal";
  else cout << "Not Equal";
  return 0;
} 
// You are given two strings of size n (1e6)
//Find if they are equal or not using Hashing.

// https://prnt.sc/p6I4buEO35gV
// https://prnt.sc/3UH2MThLhUb2
// https://prnt.sc/6RisYwjQFrql
// https://prnt.sc/FoN9UxCvpRO4
// https://prnt.sc/uyrG-q6xbvLi
// https://prnt.sc/dlwkheUH5Uh4