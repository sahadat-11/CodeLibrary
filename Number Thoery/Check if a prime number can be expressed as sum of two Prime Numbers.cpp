//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long

bool isprime(int n) {
   if(n <= 1) return false;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) return false;
   }
   return true;
}
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   if(isprime(n) and isprime(n - 2)) cout << "YES\n";
   else cout << "NO\n";
    return 0;
}
