//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> subsets(vector<int>& nums) {
int n = nums.size();
int sub_cnt = (1 << n); // (2^n);
vector<vector<int>> all_subsets;
for(int mask = 0; mask < sub_cnt; mask++) {
    vector<int> subset;
    for(int i = 0; i < n; i++) {
      if(mask & (1 << i)) {
        subset.push_back(nums[i]);
      }
    }
    all_subsets.push_back(subset);
  }
  return all_subsets;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++) {
	cin >> a[i];
}
auto all_subsets = subsets(a);
for(auto subset : all_subsets) {
	 for(int ele : subset) {
	 	cout << ele << " ";
	 }
	cout << "\n";
  }
  return 0;
}
// https://prnt.sc/VXizd3fD0nfm 
// https://www.youtube.com/watch?a=wpWGDHmpbgA

