#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cout << __lg(n) << endl;// n == 8, ans = 3;
    
    n = 4;
    cout << (1 << n )<< endl; // 2 ^ 4
    return 0;  
}