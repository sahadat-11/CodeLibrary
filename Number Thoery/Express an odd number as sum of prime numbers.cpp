//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100000;
bool f[N];
void sieve() {
  f[0] = f[1] = true;
  for (int i = 2; i * i <= N; i++) {
    if (!f[i]) {
      for (int j = i * i; j <= N; j = j + i) f[j] = true;
    }
  }
}
void min_prime(int n) {
  sieve();
  if (!f[n]) cout << n << endl;
  else if (!f[n - 2]) cout << 2 << " " << n - 2 << endl;
  else {
    cout << 3 << " ";
    n -= 3;
    for (int i = 2; i < n; i++) {
      if ((!f[i]) and(!f[n - i])) {
        cout << i << " " << n - i << endl;
        return;
      }
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  min_prime(n);
  return 0;
}
// approach 2:

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
   if(isprime(n)) cout << n << "\n";
   else if(isprime(n - 2)) cout << 2 << " " << n - 2 << "\n";
   else {
      cout << 3 << " ";
      n -= 3;
      for(int i = 2; i <= n / 2; i++) {
         if(isprime(i) and isprime(n - i)) {
            cout << i << " " << n - i << "\n";
            return 0;
         }
      }
   }
   return 0;
}
