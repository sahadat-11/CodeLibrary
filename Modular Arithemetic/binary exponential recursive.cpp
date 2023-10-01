//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int binary_exponential(int base, int power) {
	int ans = 1;
	while(power) {
		if(power & 1) { // if power in odd
			ans *= base;
			power--;
		}
		else {
			base *= base;
			power >>= 1; // power / 2;
		}
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int base, power; cin >> base >> power;
  cout << binary_exponential(base, power);
  return 0;
}

// O(log(n)) 

// https://prnt.sc/GRzQPneUZBpc
// https://prnt.sc/X_IGW9oxTP0k
// https://prnt.sc/Esqh6L4MTwNY