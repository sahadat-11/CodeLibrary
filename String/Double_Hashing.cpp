//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
const int p1 = 137, mod1 = 1e9 + 7, p2 = 277, mod2 = 1e9 + 9;
int pw1[N], pw2[N];
void pre() {
  pw1[0] = 1;
  for(int i = 1; i < N; i++) {
    pw1[i] = 1ll * pw1[i - 1] * p1 % mod1;
  }
  pw2[0] = 1;
  for(int i = 1; i < N; i++) {
    pw2[i] = 1ll * pw2[i - 1] * p2 % mod2;
  }
}
pair<int, int> hsh(string s) {
  int res1 = 0, res2 = 0;
  for(int i = 0; i < s.size(); i++) {
    res1 += 1ll * s[i] * pw1[i]; //s[i] automatically ascii
    res1 %= mod1;
  }
  for(int i = 0; i < s.size(); i++) {
    res2 += 1ll * s[i] * pw2[i]; //s[i] automatically ascii
    res2 %= mod2;
  }
  return {res1, res2};
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  pre();
	string a, b; cin >> a >> b; 
  if(hsh(a) == hsh(b)) cout << "Equal";
  else cout << "Not Equal";
  return 0;
}
// You are given n (5e3) strings each of size m (5e3). 
// Find the number of unique strings in 1s.