//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for(int i = 0; i < n; i += 2) {
    if(a[i] != a[i + 1]) {
      cout << a[i] << "\n";
      return 0;
    }
  }
  return 0;
}
// brute force (n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
  }
  for(auto u : mp) {
    if(u.second == 1) cout << u.first << "\n";
  }
  return 0;
}
map log(n)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int ans = 0;
  if(n == 1) ans = a[0];// if only one element
  else if(a[0] != a[1]) ans = a[0];// first value is single
  else if(a[n - 1] != a[n - 2]) ans = a[n - 1];// last value is single
  else {
     int l = 0, r = n - 1;
     while(l <= r) {
       int mid = l + (r - l) / 2;
       if((a[mid] != a[mid - 1]) and (a[mid] != a[mid + 1])) {
        ans = a[mid];
      } 
      if((mid % 2 == 0 and a[mid] == a[mid + 1]) or (mid % 2 == 1 and a[mid] == a[mid - 1])) {
        l = mid + 1;
      }
      else {
        r = mid - 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
// binary search log(n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int XOR = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    XOR ^= a[i];
  }
  cout << XOR << "\n";
  return 0;
}
//bitwise XOR O(n) 


//https://prnt.sc/IfqlQ_KseBuk

// https://prnt.sc/S1f9ZdQbxb_q