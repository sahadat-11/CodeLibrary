//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int l, r; cin >> l >> r;
   int AND = l;
   for(int i = l + 1; i <= r; i++) {
      AND = (AND & i);
   }
   cout << AND << endl;
   return 0;
}
// O(R);



//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int l, r; cin >> l >> r;
   int ans = 0;
   for(int bit = 30; bit >= 0; bit--) {
      if((l & (1 << bit)) != (r & (1 << bit))) {
         break;
      }
      else {
         ans |= (r & (1 << bit));
      }
   }
   cout << ans << "\n";
   return 0;
}
// O(30);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int l, r; cin >> l >> r;
   int cnt = 0;
   while(l != r) {
      cnt++;
      l >>= 1;
      r >>= 1;
   }
   cout << (r << cnt) << endl;
   return 0;
}
// O(30);

// https://prnt.sc/OESh9_EVE-Hy