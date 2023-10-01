//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll binary_exponential(ll base, ll power, ll mod) {
	ll ans = 1;
	while(power) {
		if(power & 1) { // if power in odd
			ans = (ans % mod) * (base % mod) % mod;
			power--;
		}
		else {
			base = (base % mod) * (base % mod) % mod;
			power >>= 1; // power / 2;
		}
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll base, power, mod; cin >> base >> power >> mod;
  cout << binary_exponential(base, power, mod);
  return 0;
}

// O(log(n)) 

// https://prnt.sc/GRzQPneUZBpc
// https://prnt.sc/X_IGW9oxTP0k
// https://prnt.sc/Esqh6L4MTwNY