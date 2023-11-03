//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string binary; cin >> binary;
   int dec = 0;
   for(int i = 0; i < binary.size(); i++) {
      int bit = binary[i] - '0';
      dec = dec * 2 + bit;
   }
   cout << dec << "\n";
   cout << stoi(binary, 0, 2) << endl; // approach 2
   return 0;
}
//Complexity : O(string length)
