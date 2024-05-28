//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int q; cin >> q;
   while(q--) {
      int l, r; cin >> l >> r;
      int XOR = 0;
      for(int i = l; i <= r; i++) {
         XOR ^= a[i];
      }
      cout << XOR << "\n";
   }
   return 0;
}
// O(N * N);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int pre_xor[n];
   pre_xor[0] = a[0];
   for(int i = 1; i < n; i++) {
      pre_xor[i] = (pre_xor[i - 1] ^ a[i]);
   }
   // for(int i = 0; i < n; i++) {
   //    cout << pre_xor[i] << " ";
   // }
   // cout << "\n";
   int q; cin >> q;
   while(q--) {
      int l, r; cin >> l >> r;
      int XOR = 0;
      // for(int i = l; i <= r; i++) {
      //    XOR ^= a[i];
      // }
      // cout << XOR << "\n";
      if(l == 0) XOR = pre_xor[r];
      else XOR = pre_xor[l - 1] ^ pre_xor[r];
      cout << XOR << "\n";
   }
   return 0;
}


class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> pre;
        pre.push_back(arr[0]);
        for(int i = 1; i < arr.size(); i++) {
            pre.push_back(pre[i - 1] ^ arr[i]);
        }
        vector<int> ans;
        for(int i = 0; i < queries.size(); i++) {
           int l = queries[i][0];
           int r = queries[i][1];
           if(l == 0) ans.push_back(pre[r]);
           else ans.push_back(pre[r] ^ pre[l - 1]);
        }
        return ans;
    }
};
////https://leetcode.com/problems/xor-queries-of-a-subarray/description/