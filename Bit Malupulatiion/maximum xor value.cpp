//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll a, b; cin >> a >> b;
   if(a == b) {
   	cout << 0 << "\n";
   	return 0;
   }
   ll x = a^b;
   int pos = 0;
   while(x) {
   	 x >>= 1;
   	 pos++;
   }
   cout << (1LL << pos) - 1 << endl;
   return 0;
}
// log(r);
 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll a, b; cin >> a >> b;
   if(a == b) {
   	cout << 0 << "\n";
   	return 0;
   }
   ll x = a^b;
   ll mask = 63 - __builtin_clzll(x);
   cout << 2 * (1LL << mask) - 1;
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll l, r; cin >> l >> r;
  if(l == r) {
    cout << 0 << "\n";
    return 0;
  }
  ll x = l^r;
  ll ind = 0;
  for(int i = 0; i < 64; i++) {
     if(x & (1ll << i)) {
       ind = i;
     }
  }
  cout << 2 * (1ll << ind) - 1 << endl;
  return 0;
}
