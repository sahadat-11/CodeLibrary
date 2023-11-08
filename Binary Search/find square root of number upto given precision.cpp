// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
	// int n; cin >> n;
	// int x = sqrtl(n);
	// cout << x << endl;
// 	
    // return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
double eps = 1e-6; // 10^-6// 0.000001
int main() {
	double n; cin >> n;
	double l = 0, h = n;
	while(h - l > eps) {
		double mid = l + (h - l) / 2;
		if(mid * mid < n) {
			l = mid;
		}
		else h = mid;
		cout << mid << endl;
	}
	cout << l << " " << h << " ";
	cout << pow(n, 1.0 / 2); // work in same
	
    return 0;
}