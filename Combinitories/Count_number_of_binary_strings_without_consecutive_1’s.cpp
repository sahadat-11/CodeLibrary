//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int fib[N];

void fibonacci() {
	fib[1] = 0;
	fib[2] = 1;
	for(int i = 3; i <= N; i++) {
	  fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
	}
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fibonacci();
  
  int n; cin >> n;
  cout << fib[n + 3];

  return 0;
}