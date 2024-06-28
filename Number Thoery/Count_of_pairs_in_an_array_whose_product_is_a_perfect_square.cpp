// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n; cin >> n;
//    vector<int> a(n);
//    for(int i = 0; i < n; i++) {
//      cin >> a[i]; 
//    }
//    int cnt = 0;
//    for(int i = 0; i < n - 1; i++) {
//    	 for(int j = i + 1; j < n; j++) {
//        int x = a[i] * a[j];
//        int y = sqrtl(x);
//        if(y * y == x) cnt++;
//    	 }
//    }
//    cout << cnt << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// // O(n * n);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int spf[N];

void solve() {
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
    if(spf[i] == i) {
      for(int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
   }
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   } 
   for(int i = 0; i < n; i++) {
   	 int x = a[i];
   	 int num = 1;
   	 while(x > 1) {
   	 	int cnt = 0;
   	 	int y = spf[x];
   	 	while(x % y == 0) {
   	 		cnt++;
   	 		x /= y;
   	 	}
   	 	if(cnt % 2) num *= y;
   	 }
   	 a[i] = num;
   }
   map<int, int> mp;
   int ans = 0;
   for(auto u : a) mp[u]++;
   for(auto [val, cnt] : mp) {
   	ans += (cnt * (cnt - 1) / 2);
     //cout << val << " " << cnt << "\n";
   }
   cout << ans << "\n";
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

// O(n * log(n);
// https://prnt.sc/W-xXu8j6-MuW
// https://prnt.sc/AgIhNheGgEZF
