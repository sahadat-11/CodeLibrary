//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x = 2, y = 4;
  cout << x % y << "\n"; // 2
  x = 5, y = 4;
  cout << x % y << "\n"; // 1
  x = -3, y = 5;
  cout << x % y << "\n"; // -3 this is not true;
  x = -3, y = 5;
  cout << ((x % y) + y) % y << "\n"; // 2 this is true;
  x = 8, y = -3;
  cout << x % y << "\n";
  return 0;
}
// https://prnt.sc/J1bFSN9ZGVei 
// https://prnt.sc/FEWZDeK7iDVf 