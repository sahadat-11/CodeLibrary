 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >> n;
vector<int> a(n);
for(int i = 0; i < n; i++) cin >> a[i];
vector<int> ans;
for(int i = 0; i < n - 1; i++) {
	 if(a[i] == a[i + 1]) ans.push_back(a[i]);
}
sort(a.begin(), a.end());
auto it = unique(a.begin(), a.end());
a.resize(distance(a.begin(), it));
//for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
n = a.size() + 1;
ll sum1 = 1ll*n * (n + 1) / 2;
ll sum2 = 0;
for(auto u : a) sum2 += u;
ans.push_back(sum1 - sum2);
for(auto u : ans) cout << u << " ";
return 0;
}
