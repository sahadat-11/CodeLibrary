//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int ind = 0;
  for(int i = 0; i < 32; i++) {
     if(n & (1 << i)) {
       ind = i;
       break;
     }
  }
  cout << ind << endl;
  return 0;
}