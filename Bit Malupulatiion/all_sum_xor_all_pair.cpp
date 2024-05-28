// if(i != j)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int sum = 0;
   for(int i = 0; i < n - 1; i++) {
      for(int j = i + 1; j < n; j++) {
         int XOR = a[i] ^ a[j];
         sum += XOR;
      }
   }
   cout << sum << "\n";
   return 0;
}
// O(N * N);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   ll sum = 0;
   for(int bit = 0; bit < 32; bit++) {
      int one = 0, zero = 0;
      for(int i = 0; i < n; i++) {
          if(a[i] & (1 << bit)) {
            one++;
          }
          else zero++;
      }
      sum += (1ll * one * zero * (1 << bit));
   }
   cout << sum << "\n";
   return 0;
}
// O(32 * N);
//https://prnt.sc/IBoMqVB8JnOX
//https://prnt.sc/HvjCa8bNI3aa
//https://prnt.sc/L8lldWJ1FY0m
//https://www.youtube.com/watch?v=jmmnNc88zk4