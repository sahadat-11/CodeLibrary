//In The Name of ALLAH
// Right Shift
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   while(n) {
      if(n & 1) cnt++;  
      n >>= 1;
   }
   cout << cnt << endl;
   return 0;
}

//In The Name of ALLAH
// Right Shift
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int i = 1; i <= 32; i++) {
      // if(n & (1 << i)) cnt++;
      int x = 1 << i;
      if(x & n) cnt++;
   }
   cout << cnt << endl;
   return 0;
}


// https://prnt.sc/oFzKjPE-inPZ

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << __builtin_clz(n) << "\n"; //leading(ager) zero
  cout << __builtin_ctz(n) << "\n"; //trailing(porer) zero
  cout << __builtin_popcount(n) << "\n"; // count total set bit;
  cout << __builtin_popcountll(n) << "\n"; // count total set bit;(long long)
  cout << __builtin_parity(n) << "\n";// even 1 retrun 0, odd 1 return 1;
  return 0;
}