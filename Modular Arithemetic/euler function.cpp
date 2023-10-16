//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int euler(int n) {
	int ans = n;
	for(int p = 2; p * p <= n; p++) {
		if(n % p == 0) {
			while(n % p == 0) {
			  n /= p;
			}
			ans *= (p - 1); //n*(p-1)/ p;
			ans /= p;
		}
	}
	if(n > 1) {
		ans *= (n - 1);
		ans /= n;
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << euler(n);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int euler(int n) {
	float ans = n;
	for(int p = 2; p * p <= n; p++) {
		if(n % p == 0) {
			while(n % p == 0) {
			  n /= p;
			}
			ans *= (1.0 - (1.0 / float(p)));
		}
	}
	if(n > 1) {
		ans *= (1.0 - (1.0 / float(n)));
	}
	return (int)ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << euler(n);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int euler(int n) {
	int ans = n;
	for(int p = 2; p * p <= n; p++) {
		if(n % p == 0) {
			while(n % p == 0) {
			  n /= p;
			}
			ans -= (ans / p);
		}
	}
	if(n > 1) {
		ans -= (ans / n);
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  cout << euler(n);
  return 0;
}
// o(sqrt(n))
// https://prnt.sc/lRUiaLUepq-q 