//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7, mod = 1e9 + 7, p = 137;
int pw[N];

int hsh(string s) {
  int res = 0;
  for(int i = 0; i < s.size(); i++) {
    res += s[i] * pw[i]; //s[i] automatically ascii
    res %= mod;
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	
  pw[0] = 1;
  for(int i = 1; i < N; i++) {
    pw[i] = pw[i - 1] * p % mod;
  }
  
  int n; cin >> n;
  vector<string> v(n);
  set<int> st;
  for(int i = 0; i < n; i++) {
   cin >> v[i];
   int x = hsh(v[i]);
   st.insert(x); 
  }
  cout << (int)st.size() << "\n";
  return 0;
}