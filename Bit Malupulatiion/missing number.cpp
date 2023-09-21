//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >> n; int a[n];
for(int i = 0; i < n; i++) cin >> a[i];
// long long sum = 0;
// for(int i = 0; i < n; i++)) sum += a[i];
// long long sum1 = n * (n + 1) / 2;
// return sum1 - sum;
int XOR = 0;
int n = nums.size();
for(int i = 0; i < n; i++) {
XOR ^= (a[i] ^ i);
}
XOR ^= (n);
cout << XOR << endl;
return 0;
}
