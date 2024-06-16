//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4 + 7;
int a[N], b[N], ans[N];
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int ind = 1;
    map<int,int> mp;
    for(int i = 1; i <= n; i++) {
    	if(!mp[a[i]]) {
    		mp[a[i]] = ind;
    		ind++;
    	}
    }
    for(int i = 1; i <= n; i++) {
    	a[i] = mp[a[i]];
    }
    for(int i = 1; i <= n; i++) {
    	cout << a[i] << " ";
    }
    return 0;  
}