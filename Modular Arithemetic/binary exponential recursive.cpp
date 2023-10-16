//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans *= a;
			b--;
		}
		else {
			a *= a;
			b >>= 1; // b / 2;
		}
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b; cin >> a >> b;
  cout << binexp(a, b);
  return 0;
}

// O(log(n))

// https://prnt.sc/GRzQPneUZBpc
// https://prnt.sc/X_IGW9oxTP0k
// https://prnt.sc/Esqh6L4MTwNY