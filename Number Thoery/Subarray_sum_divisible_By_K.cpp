// Count the subarry;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int,int> mp;
  mp[0] = 1; // if the sum is 0;
  int sum = 0, cnt = 0;
  for(int i = 0; i < n; i++) {
    sum += a[i];
    cnt += mp[(sum % k + k) % k];
    mp[(sum % k + k) % k]++;
  }
  cout << cnt << "\n";
  return 0;
}

// https://leetcode.com/problems/subarray-sums-divisible-by-k/description/


// Exist Any subarry

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0, sum = 0;
  map<int, int> mp;
  for(int i = 0; i < n; i++) { // 0 indexing
    sum += a[i];
    int rem = (sum % k + k) % k;
    if(rem == 0) {
      cout << "YES\n"; return 0;
    }
    else if(mp.find(rem) == mp.end()) {
      mp[rem] = i;
    }
    else {
      cout << "YES\n"; return 0;
    }
  }           
  cout << "NO\n";
  return 0;
}
