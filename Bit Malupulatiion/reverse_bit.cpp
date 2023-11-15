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
// https://prnt.sc/dM02-wNBcIB3

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   // for(int i = 31; i >= 0; i--) {//left to right n er ith bit;
   //    if((1 << i) & n) cout << 1;
   //    else cout << 0;
   // }
   // cout << "\n";
   int res = 0;
   for(int i = 0; i < 32; i++) {
      int lsb = n & 1;(n % 2) // (n & 00000000000000000000000000000001)// least bit one or zero(baki sob 0 hobe)
      int revlsb = lsb << (31 - i);//(lsb * (pow(2, (31 - i)))); //binary to decimal
      res += revlsb;//
      n >>= 1;
   }
   // for(int i = 31; i >= 0; i--) {//left to right reverse n er ith bit;
   //    if((1 << i) & res) cout << 1;
   //    else cout << 0;
   // }
   // cout << "\n";
   cout << res << endl;
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
   int res = 0, cnt = 0;
   while(n) {
      int lsb = n % 2;
      res += (lsb << (31 - cnt));
      cnt++;
      n >>= 1;
   }
   cout << res << "\n";
   return 0;
}
//https://prnt.sc/dM02-wNBcIB3