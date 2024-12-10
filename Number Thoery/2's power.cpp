//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cout << __lg(n) << endl;// n == 8, ans = 3;
    
    n = 4;
    cout << (1 << n )<< endl; // 2 ^ 4
    return 0;  
}