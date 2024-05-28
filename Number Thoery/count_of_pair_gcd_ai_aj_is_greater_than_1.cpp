//1<=N<=10^5
//1<=A[i]<=3000
 
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n;
    	cin >> n; int a[n];
    	int mp[3005] = {};
    	for(int i = 0; i < n; i++) {
    		cin >> a[i];
    		mp[a[i]]++;
    	}
    	int x = 0, y = 0;
    	for(int i = 1; i <= 3000; i++) {
    		for(int j = 1; j <= 3000; j++) {
    			if(__gcd(i, j) > 1) {
    				if(i != j)
    					x += mp[i] * mp[j];
    				else 
    					y += mp[i] * (mp[i] - 1) / 2;
    			}
    		}
    	}
 
    	cout << x / 2 + y << '\n';
    }
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
