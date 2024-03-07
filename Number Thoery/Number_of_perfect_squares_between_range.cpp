//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int l, r; cin >> l >> r;
   int cnt = 0;
    for(int i = l; i <= r; i++) {
    	int x = sqrtl(i);
    	if(x * x == i) {
    		cnt++;
    		cout << i << "\n";
    	}
    }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int l, r; cin >> l >> r;
   int x = ceil(sqrtl(l));
   int y = ceil(sqrtl(r));
   int cnt = y - x + 1;
   for(int i = x; i <= y; i++) {
   	cout << i * i << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// sqrt(r);