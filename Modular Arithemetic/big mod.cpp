//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
// a <= 10^9, b <= 10^9;
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * 1ll * a) % mod; // type cast for integer overflow
		}
		a = (a * 1ll * a) % mod;
		b >>= 1; // if b in odd(if 0th bit is set)
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b; cin >> a >> b;
  cout << binexp(a, b);
  return 0;
}

// O(log(n)) 

// https://prnt.sc/GRzQPneUZBpc
// https://prnt.sc/X_IGW9oxTP0k
// https://prnt.sc/Esqh6L4MTwNY
// https://prnt.sc/EqH54bMpOFlT

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e18 + 7;
// a <= 10^18, b <= 10^9;
ll binmul(ll a, ll b) {
	ll ans = 0;
	while(b) {
		if(b & 1) {
			ans = (ans + a) % mod;
		}
		a = (a + a) % mod;
		b >>= 1;
	}
	return ans;
}
ll binexp(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd(if 0th bit is set)
			ans = binmul(ans, a); 
		}
		a = binmul(a, a);
		b >>= 1; // b / 2;
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll a, b; cin >> a >> b;
  cout << binexp(a, b);
  return 0; 
} 
// O(log^2(N));
// https://prnt.sc/BoD81LpIuEmq
// https://prnt.sc/EqH54bMpOFlT

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e18 + 7;
ll binexp(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if(b & 1) { //if b in odd(if 0th bit is set)
			ans = (ans * 1ll * a) % mod; // type cast for integer overflow
		}
		a = (a * 1ll * a) % mod;
		b >>= 1; 
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
// two numbers are large;

// https://prnt.sc/GRzQPneUZBpc
// https://prnt.sc/X_IGW9oxTP0k
// https://prnt.sc/Esqh6L4MTwNY
// https://prnt.sc/EqH54bMpOFlT