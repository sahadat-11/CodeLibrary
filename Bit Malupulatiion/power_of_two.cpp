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
   if(cnt == 1) cout << "POWER OF TWO\n";
   else cout << "NO\n";
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
      int x = (1 << i);
      if(x & n) cnt++;
   }
   if(cnt == 1) cout << "POWER OF TWO\n";
   else cout << "NO\n";
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
   if(n & (n - 1) == 0) cout << "POWER OF TWO\n";
   else cout << "NO\n";
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  if(__builtin_popcountll(n) == 1) {
   cout << "YES\n";
  }
  else {
   cout << "NO\n";
  }
  return 0;
}

// https://prnt.sc/S1f9ZdQbxb_q
//https://prnt.sc/Ll4_-0BVX3jq
