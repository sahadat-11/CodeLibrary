//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k; int a[n];
   for(int i = 0; i < n; i++) {
   	 cin >> a[i];
   }
   int l = 0, sum = 0, ans = -1;
   for(int r = 0; r < n; r++) {
   	 sum += a[r];
   	 while(sum > k) {
   	 	sum -= (a[l++]);
   	 }
   	 if(sum == k) {
   	 	ans = max(ans, r - l + 1);
   	 }
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//only for positive


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k; int a[n];
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   map<int, int> mp;
   int sum = 0, ans = -1;
   for(int i = 0; i < n; i++) {
     sum += a[i];
     int target = sum - k;
     if(target == 0) ans = i + 1;
     if(mp.find(target) != mp.end()) {
       ans = max(ans, i - mp[target]);
     }
     if(mp.find(sum) == mp.end()) {
        mp[sum] = i;
     }
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
