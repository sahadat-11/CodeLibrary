//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> subsets(vector<int> & v) {
	int n = v.size();
	int cnt = (1 << n);
	vector<vector<int>> total_subset;
	for(int mask = 0; mask < cnt; mask++) {
		vector<int> subset;
		for(int i = 0; i < n; i++) {
			if(mask & (1 << i)) {
               subset.push_back(v[i]);
			}
		}
		total_subset.push_back(subset);
	}
	return total_subset;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   auto all_subset = subsets(v);
   ll sum = 0;
   for(auto subset : all_subset) {
   	 int XOR = 0;
   	 for(auto ele : subset) {
   	 	//cout << ele << " ";
   	 	XOR ^= ele;
   	 }
   	 //cout << "\n";
   	 sum += XOR;
   }
   cout << sum << "\n";
   return 0;
}
//(2 ^ n);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int bits = 0;
   for(int i = 0; i < n; i++) {
   	 bits |= v[i];
   }
   int sum = bits * (1 << (n - 1));
   cout << sum << "\n";
   return 0;
}
//(n);
//https://www.geeksforgeeks.org/sum-xor-possible-subsets/
//https://prnt.sc/OSzXv8oCJ6H0
//https://prnt.sc/rM9nIy7q8UQk