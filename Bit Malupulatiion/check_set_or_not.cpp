 //In The Name of ALLAH
// Right Shift
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   int x = (n >> k);
   if(x & 1) cout << "SET\n";
   else cout << "NOT SET\n";
   return 0;
}

 //In The Name of ALLAH
// Left Shift
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   // if(n & (1 << k)) cout << "set"
   int x = (1 << k);
   if(x & n) cout << "SET\n";
   else cout << "NOT SET\n";
   return 0;
}
// https://prnt.sc/QrkUbmW82f3t