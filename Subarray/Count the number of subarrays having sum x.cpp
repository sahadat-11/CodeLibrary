 // //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
   // int n, k; cin >> n >> k; int a[n];
   // for(int i = 0; i < n; i++) {
   	// cin >> a[i];
   // }
   // int cnt = 0;
   // for(int i = 0; i < n; i++) {
   	 // int sum = 0;
   	 // for(int j = i; j < n; j++) {
   	 	// sum += a[j];
   	 	// if(sum == k) cnt++;
   	 // }
   // }
   // cout << cnt << "\n";
   // return 0;
// }
// // O(n * n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int cnt = 0;
   map<int, int> mp;
   mp[0] = 1;
   int sum = 0;
   for(int i = 0; i < n; i++) {
   	 sum += a[i];
   	 cnt += mp[sum - k];
   	 mp[sum]++;
   }
   cout << cnt << "\n";
   return 0;
}