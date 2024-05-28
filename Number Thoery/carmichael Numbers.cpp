//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int bigmod(int a, int b, int m) {
   int ans = 1;
   while(b) {
   	 if(b & 1) {
   	 	ans = (ans * a) % m;
   	 	b--;
   	 }
   	 else {
   	 	a = (a * a) % m;
   	 	b >>= 1;
   	 }
   }
   return ans;
}
bool charmichael(int n) {
	// total coprime (1 to n with n)
	// for(int i = 1; i <= n; i++) {
		// if(__gcd(i, n) == 1) cout << i << " "; 
	// }
	for(int i = 1; i <= n; i++) {
		if(__gcd(i, n) == 1) {
			if(bigmod(i, n - 1, n) != 1) return false;
		}
	}
	return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   if(charmichael(n)) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}