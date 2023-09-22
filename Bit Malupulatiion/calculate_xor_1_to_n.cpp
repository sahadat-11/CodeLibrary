 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int XOR = 0;
   for(int i = 1; i <= n; i++) {
      XOR ^= i;
   }
   cout << XOR << endl;
   return 0;
}
// O (n);

 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int mod = n % 4;
   if(mod == 0) cout << n << endl;
   else if(mod == 1) cout << 1 << endl;
   else if(mod == 2) cout << n + 1 << endl;
   else cout << 0 << endl;
   return 0;
}
// O (1);
// https://prnt.sc/7qcu2lsmJjYU 