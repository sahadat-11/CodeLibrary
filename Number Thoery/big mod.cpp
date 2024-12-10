//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long

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
int32_t main() {
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
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
// a <= 10^18, b <= 10^9;
int binmul(int a, int b) {
	int ans = 0;
	while(b) {
		if(b & 1) {
			ans = (ans + a) % mod;
		}
		a = (a + a) % mod;
		b >>= 1;
	}
	return ans;
}
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) { // if b in odd(if 0th bit is set)
			ans = binmul(ans, a); 
		}
		a = binmul(a, a);
		b >>= 1; // b / 2;
	}
	return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b; cin >> a >> b;
  cout << binexp(a, b);
  return 0; 
} 
// O(log^2(N));
// https://prnt.sc/BoD81LpIuEmq
// https://prnt.sc/EqH54bMpOFlT

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int binmul(int a, int b, int p) {
   return __int128(a) * b % p;// convert to 128 bit;(10^36)
}
int binexp(int a, int b, int p) {
   int ans = 1;
   while(b) {
      if(b & 1) { // if b in odd(if 0th bit is set)
         ans = binmul(ans, a, p); 
      }
      a = binmul(a, a, p);
      b >>= 1; // b / 2;
   }
   return ans % p;
}
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b, p; cin >> a >> b >> p;
   cout << binexp(a, b, p) << "\n";
   cout << binmul(a, b, p) << "\n";
   cout << binmul(a, binexp(b, p - 2, p), p);
   return 0;
}
// https://prnt.sc/pX4okL80dQzU


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e18 + 7;
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) { //if b in odd(if 0th bit is set)
			ans = (ans * 1ll * a) % mod; // type cast for integer overflow
		}
		a = (a * 1ll * a) % mod;
		b >>= 1; 
	}
	return ans;
}
int powerstring(string x, string y) {
	int a = 0, b = 0;
	for(int i = 0; i < x.size(); i++) {
	   a = ((a * 10) + (x[i] - '0')) % (mod - 1);
	}
	for(int i = 0; i < y.size(); i++) {
	   b = ((b * 10) + (y[i] - '0')) % (mod - 1);
	}
	return binexp(a, b);
}
int32_t main() {
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