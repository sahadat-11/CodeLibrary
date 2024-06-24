#include<bits/stdc++.h>
using namespace std;

int n = 5, a[22];
void rec(int i) {
if (i == n + 1) {
    for (int j = 1; j <= n; j++) {
       cout << a[j] << ' ';
    }
       cout << '\n';
       return;
    }
    for (int k = 1; k <= 4; k++) {
        a[i] = k;
        rec(i + 1);
    }
}
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
rec(1);
return 0;
}