//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e6 + 7;
int pre[32][N];
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) cin >> a[i];
   for(int bit = 0; bit < 32; bit++) {
   	for(int i = 1; i <= n; i++) { // 1 indexing
   	 pre[bit][i] = ((a[i] >> bit) & 1);
     pre[bit][i] +=pre[bit][i - 1];
   	}
   }
   // for(int bit = 0; bit < 31; bit++) {
   // 	for(int i = 1; i <= n; i++) {
   // 		cout << pre[bit][i] << " ";
   // 	}
   // 	cout << endl;
   // }
   int q; cin >> q;
   while(q--) {
   	int l, r; cin >> l >> r; // 1 indexing
   	int ans = 0;
   	for(int bit = 0; bit < 32; bit++) {
   	  int x = pre[bit][r] - pre[bit][l - 1];
   	  if(x % 2 != 0) {
        ans |= (1 << bit);
   	  }
   	}
   	cout << ans << "\n";
   }
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

#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > prefixsumBit(vector<int>& nums)
{
  int n = nums.size();

  // Step 1: Store bit information in 'temp'
  vector<vector<int> > temp(n + 1, vector<int>(32, 0));
  for (int i = 1; i <=n; ++i) {
    int num = nums[i];
    for (int j = 0; j < 32; ++j) {
      // Check if the j-th bit of nums[i] is set
      if (((1 << j) & nums[i-1]) != 0) {
        temp[i][j] = 1;
      }
    }
  }

  // Step 2: Compute prefix sums
  vector<vector<int> > psum(n + 1, vector<int>(32, 0));
  for (int j = 0; j < 32; ++j) {
    for (int i = 1; i <= n; ++i) {
      // Calculate prefix sum for each bit
      psum[i][j] = psum[i - 1][j] + temp[i][j];
    }
  }
  return psum;
}

int rangeBitwiseXOR(vector<vector<int> >& psum, int l,
          int r)
{
  int result = 0;
  for (int j = 0; j < 32; ++j) {
    // Calculate the count of elements with j-th bit set
    // in the range [l, r]
    int count = psum[r][j] - psum[l - 1][j];

    // If count is odd, add it to the result
    if (count % 2 == 1) {
      result = result + (1 << j);
    }
  }
  return result;
}

// driver's code
int main()
{
// Input Array
  vector<int> nums = { 13, 11, 2, 3, 6 };

// Range
  int l = 2, r = 4;

// 2D prefix sum
  vector<vector<int> > psum = prefixsumBit(nums);

  cout <<"Bitwise XOR of range [2,4] is :"<< rangeBitwiseXOR(psum, l, r);

  return 0;
}
