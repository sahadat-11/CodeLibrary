//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   int mask = ~(1 << k);
   n = (n & mask);
   cout << n << endl;
   return 0;
}