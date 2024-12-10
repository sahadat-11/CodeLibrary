// Right Shift
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   int x = (n >> k);
   if(x & 1) cout << "SET\n";
   else cout << "NOT SET\n";
   return 0;
}

// Left Shift
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  if(n & (1LL << k)) {
   cout << "SET\n";
  }
  else {
   cout << "NOT SET\n";
  }
  return 0;
}