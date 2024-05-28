//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string binary = "";
   while(n) {
      binary += (n % 2 + '0'); // int to char;
      n /= 2;
   }
   reverse(binary.begin(), binary.end());
   cout << binary << "\n";
   return 0;
}
//Complexity O(log n)
//https://prnt.sc/oT2xQkR-mUmF
