//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(int n) {
  if(n <= 1) return false;
  for(int i = 2; i * i <= n; i++) {
    if(n % i == 0) return false;
  }
  return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int n; cin >> n;
    if(isprime(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll binmul(ll a, ll b, ll m) {
	ll ans = 0;
	while(b) {
		if(b & 1) {
			ans = (ans + a) % m;
			b--;
		}
		else {
			a = (a + a) % m;
			b >>= 1;
		}
	}
	return ans;
}
ll bigmod(ll a, ll b, ll m) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = binmul(ans, a, m); 
			b--;
		}
		else {
			a = binmul(a, a, m);
			b >>= 1; // b / 2;
		}
	}
	return ans;
}
bool isprime(ll n, int iterate = 5) {
	if (n <= 4) {
        return n == 2 or n == 3;
    }
    for(int i = 0; i < iterate; i++) {
    	// Generate a random 'a' in the range [2, n-2]
    	ll a = 2 + rand() % (n - 3);
    	if (bigmod(a, n - 1, n) != 1) return false;
    }
    return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 ll n; cin >> n;
   	 if(isprime(n)) cout << "YES\n";
   	 else cout << "NO\n";
   }
   return 0;
}

//https://www.spoj.com/problems/PON/ 