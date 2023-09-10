//Approach 1: (important)
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 9;
bitset<N>f;
void sieve () {
   f[0] = f[1] = true; 
    for(int i = 4; i <= N; i = i + 2) f[i] = true;
    for(int i = 3; i * i < N; i += 2) {
      if(!f[i]){ 
         for(int j = i * i; j < N; j += 2*i) f[j] = true;
     }
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   int t, cs = 0; cin >> t;
   while(t--) {
      int n; cin >> n;
      int cnt = 0;
      for(int i = 2; i <= n / 2; i++) {
         if(!f[i] and !f[n - i]) cnt++;
      }
      cout << "Case " << ++cs << ": ";
      cout << cnt << "\n";
   }
  return 0;
 }