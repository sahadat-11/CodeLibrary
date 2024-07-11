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
  deque<int> mx_dq, mn_dq;
  int sum = 0;
  for(int i = 0; i < k; i++) {
    while(!mx_dq.empty() and a[i] >= a[mx_dq.back()]) {
       mx_dq.pop_back(); 
    }
    while(!mn_dq.empty() and a[i] <= a[mn_dq.back()]) {
       mn_dq.pop_back(); 
    }
    mx_dq.push_back(i);
    mn_dq.push_back(i);
  }
  sum += a[mx_dq.front()] + a[mn_dq.front()];
  for(int i = k; i < n; i++) {
    while(!mx_dq.empty() and mx_dq.front() <= i - k) {
      mx_dq.pop_front();
    }
    while(!mx_dq.empty() and a[i] >= a[mx_dq.back()]) {
       mx_dq.pop_back(); 
    }
    mx_dq.push_back(i);

    while(!mn_dq.empty() and mn_dq.front() <= i - k) {
      mn_dq.pop_front();
    }
    while(!mn_dq.empty() and a[i] <= a[mn_dq.back()]) {
       mn_dq.pop_back(); 
    }
    mn_dq.push_back(i);
    sum += a[mx_dq.front()] + a[mn_dq.front()];
  }
  cout << sum << "\n";
  return 0;
}

// https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1