//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int n, m;
bool isvalid(int a[], int h) {
   ll sum = 0;
   for(int i = 0; i < n; i++) {
      if(a[i] >= h) {
         sum += (a[i] - h);
      }
   }
   return sum >= m;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  ll l = 0, h = 1e9, ans = -1;
  while(l <= h) {
   ll mid = l + (h - l) / 2;
   if(isvalid(a, mid)) {
      ans = mid;
      l = mid + 1;
   }
   else {
      h = mid - 1;
   }
  }
  cout << ans << "\n";
  return 0;
}
// nlogn
//https://www.spoj.com/problems/EKO/
//https://www.geeksforgeeks.org/binary-search-intuition-and-predicate-functions/
//(gfg for explain illustration)
//https://prnt.sc/7ErdQU9Fpk7-

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int n, cows, pos[N];
bool isplace_cow(int mindis) {
   int last = 0, cnt = 1;// place 1 cow in 0 index
   for(int i = 1; i < n; i++) {
      if(pos[i] - pos[last] >= mindis) {
         cnt++;
         last = i;// last position
         if(cnt == cows) break;// if equal not necessary to run;
      }
   }
   return cnt == cows;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    cin >> n >> cows;
    for(int i = 0; i < n; i++) cin >> pos[i];
    sort(pos, pos + n);
    int l = 0, r = 1e9, ans = 0;
    while(l <= r) {
      int mid = l + (r - l) / 2;
      if(isplace_cow(mid)) {
         ans = mid;
         l = mid + 1;
      }
      else {
         r = mid - 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
//https://www.spoj.com/problems/AGGRCOW/
//https://prnt.sc/7ErdQU9Fpk7-