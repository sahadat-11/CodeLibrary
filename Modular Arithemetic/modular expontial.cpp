//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll modexp(ll a, ll b, ll mod) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * 1ll * a) % mod; // type cast for integer overflow
			b--;
		}
		else {
			a = (a * 1ll * a) % mod;
			b >>= 1; // b / 2;
		}
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll a, b, mod; cin >> a >> b >> mod;
  cout << modexp(a, b, mod);
  return 0;
}

// O(log(n)) 

// https://prnt.sc/GRzQPneUZBpc
// https://prnt.sc/X_IGW9oxTP0k
// https://prnt.sc/Esqh6L4MTwNY