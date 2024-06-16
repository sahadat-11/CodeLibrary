// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n, k; cin >> n >> k;
//    vector<int> a(n);
//    for(int i = 0; i < n; i++) cin >> a[i];
//    int ans = -1;
//    for(int i = 0; i < n; i++) {
//    	 int sum = 0;
//    	 for(int j = i; j < n; j++) {
//    	 	sum += a[j];
//    	 	if(sum % k == 0) ans = max(ans, j - i + 1);
//    	 }
//    }
//    cout << ans << "\n";
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }
// // O(n * n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) cin >> a[i];
   int ans = 0, sum = 0;
   map<int, int> mp;
   for(int i = 1; i <= n; i++) { // 1 indexing
   	 sum += a[i];
   	 int rem = (sum % k + k) % k;
     if(rem == 0) ans = i;
     else if(mp.find(rem) == mp.end()) {
      mp[rem] = i;
     }
     else {
      ans = max(ans, i - mp[rem]);
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
// O(n);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> a(n + 1);
   for(int i = 0; i < n; i++) cin >> a[i];
   int ans = 0, sum = 0;
   map<int, int> mp;
   for(int i = 0; i < n; i++) { // 0 indexing
     sum += a[i];
     int rem = (sum % k + k) % k;
     if(rem == 0) ans = i + 1;
     else if(mp.find(rem) == mp.end()) {
      mp[rem] = i;
     }
     else {
      ans = max(ans, i - mp[rem]);
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
// O(n);


// https://www.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1