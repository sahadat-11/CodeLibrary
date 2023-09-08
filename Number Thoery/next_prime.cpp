//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(ll n) {
   if(n <= 1) return false;
   for(ll i = 2; i * i <= n; i++) {
      if(n % i == 0) return false;
   }
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   bool find = false;
   while(!find) {
      n++;
      if(isprime(n)) find = true;
   }
   cout << n << "\n";
   return 0;
}
