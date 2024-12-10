//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int l, r; cin >> l >> r;
  int ans = 0;
  for(int i = l; i <= r; i++) {
   for(int j = i + 1; j <= r; j++) {
     ans = max(ans, (i ^ j));
   }
  }
  cout << ans << "\n";
  return 0;
}

// O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   if(a == b) {
   	cout << 0 << "\n";
   	return 0;
   }
   int x = a^b;
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
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   if(a == b) {
   	cout << 0 << "\n";
   	return 0;
   }
   int x = a^b;
   int mask = 63 - __builtin_clzll(x);
   cout << 2 * (1LL << mask) - 1;
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int l, r; cin >> l >> r;
  if(l == r) {
    cout << 0 << "\n";
    return 0;
  }
  int x = l^r;
  int ind = 0;
  for(int i = 0; i < 64; i++) {
     if(x & (1ll << i)) {
       ind = i;
     }
  }
  cout << 2 * (1ll << ind) - 1 << endl;
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int l, r; cin >> l >> r;
  int XOR = l ^ r;
  int xx = log2(XOR) + 1;
  cout << (1ll << xx) - 1;
  return 0;
}

// https://prnt.sc/DHtxd0rojvxS 
// https://prnt.sc/-2vUC6rda9EK