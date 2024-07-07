//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  k %= n; // if k is greater than n;
  for(int i = 0; i < n; i++) {
    cout << a[(i + k) % n] << " ";
  }
  cout << "\n";
  return 0;
}

// O(n)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  reverse(a.begin(), a.begin() + k);
  reverse(a.begin() + k, a.end());
  reverse(a.begin(), a.end());
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

// https://www.geeksforgeeks.org/print-left-rotation-array/