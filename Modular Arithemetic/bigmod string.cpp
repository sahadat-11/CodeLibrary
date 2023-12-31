//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e18 + 7;
ll binexp(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * a) % mod; // type cast for integer overflow
			b--;
		}
		else {
			a = (a * 1ll * a) % mod;
			b >>= 1; // b / 2;
		}
	}
	return ans;
}
ll powerstring(string x, string y) {
	ll a = 0, b = 0;
	for(int i = 0; i < x.size(); i++) {
	   a = ((a * 10) + (x[i] - '0')) % mod;
	}
	for(int i = 0; i < y.size(); i++) {
	   b = ((b * 10) + (y[i] - '0')) % mod;
	}
	return binexp(a, b);
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string x, y; cin >> x >> y;
  cout << powerstring(x, y);
  return 0; 
} 

