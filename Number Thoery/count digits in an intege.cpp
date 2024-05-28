//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   // approach 1:
   cout << (int) floor(log10(n) + 1) << "\n";

   // approach 2:
   string s = to_string(n);
   cout << s.size() << "\n";

   //approach 3:
   int cnt = 0;
   while(n) {
      n /= 10;
      cnt++;
   }
   cout << cnt << "\n";
   
   return 0;
}

// https://prnt.sc/_m3uNa1GPkwF
// https://youtu.be/0-j-HIjoH8g?si=3PNIh8IATa2RZACB