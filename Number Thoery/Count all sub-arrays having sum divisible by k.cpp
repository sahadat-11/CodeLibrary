class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      int n = nums.size();
      unordered_map<int,int> mp;
      mp[0] = 1; // if the sum is 0;
      int sum = 0, cnt = 0;
      for(int i = 0; i < n; i++) {
          sum += nums[i];
          cnt += mp[(sum % k + k) % k];
          mp[(sum % k + k) % k]++;
      }
      return cnt;
    }
};