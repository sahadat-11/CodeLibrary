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
   	 for(auto ele : subset) {
   	   sum += ele;
   	 }
   	 //cout << "\n";
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
   ll sum = 0;
   for(int i = 0; i < n; i++) {
      sum += (v[i] * (1 << (n - 1)));
   }
   cout << sum << "\n";
   return 0;
}

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
   ll sum = 0;
   for(int i = 0; i < n; i++) {
   	 sum += v[i];
   }
   sum *= (1 << (n - 1));
   cout << sum << "\n";
   return 0;
}
//(n);
//https://www.geeksforgeeks.org/find-sum-sum-sub-sequences/
//https://prnt.sc/jvGoxDrI5YPw