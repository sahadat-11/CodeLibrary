//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   int x = 0, d = 0;
   while(n) {
      x += (n % 2) << (31 - d);
      n >>= 1;
      d++;
   }
   cout << x << endl;
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   int x = 0;
   for(int i = 0; i < 32; i++) {
      int lsb = n & 1;
      int revlsb = lsb << (31 - i);
      x += revlsb;
      n >>= 1;
   }
   cout << x << endl;
   return 0;
}