//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_a::sync_with_stdio(0);
  cin.tie(0);
  int a, b; cin >> a >> b;
  cout << pow(a, b); // it return double, so overflow
  int ans = 1;
  for(int i = 1; i <= b; i++) {
  	ans *= a;
  }
  cout << ans << "\n";
  return 0;
}
// O(b)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
// a <= 10^9, b <= 10^9;
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) { // if b in odd(if 0th bit is set)
			ans *= a;
		}
		a *= a;
		b >>= 1; // b / 2;
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
// https://prnt.sc/EqH54bMpOFlT