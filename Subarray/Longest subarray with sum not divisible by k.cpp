// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n, k; cin >> n >> k;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    int mx = -1;
//    for(int i = 0; i < n; i++) {
//    	 int sum = 0;
//    	 for(int j = i; j < n; j++) {
//    	 	sum += v[j];
//    	 	if(sum % k) mx = max(mx, j - i + 1);
//    	 }
//    }
//    cout << mx << "\n";
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
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) cin >> v[i];
   int mx = -1, sum = 0;
   for(int i = 1; i <= n; i++) {
   	 sum += v[i];
   	 if(sum % k) {
   	 	mx = max(mx, max(i, n - i));
   	 }
   }
   cout << mx << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// O(n);