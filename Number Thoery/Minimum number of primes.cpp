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
   int c = 0;
   if(isprime(n)) c = 1;
   else if(n % 2 == 0) c = 2;
   else if(isprime(n - 2)) c = 2;
   else c = 3;
   cout << c << endl;
    return 0;
}
