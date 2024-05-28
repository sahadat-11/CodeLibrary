//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 9;
bitset<N> f; 
vector<int> prime;
void sieve() {
   f[0] = f[1] = true;
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
         for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
      }
   }
   for(int i = 2; i < N; i++) {
     if(!f[i]) prime.push_back(i);
   } 
   //for(int i = 0; i < prime.size(); i = i + 100) cout << prime[i] << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   int n; cin >> n;
   ll sum = 0;
   for(auto p : prime) {
      if(p > n) break;
      sum += p;
   }
   cout << sum << "\n";
   return 0;
}