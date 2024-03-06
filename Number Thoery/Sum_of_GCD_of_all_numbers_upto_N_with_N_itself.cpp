//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int sum = 0;
   for(int i = 1; i <= n; i++) {
   	sum += (__gcd(i, n));
   }
   cout << sum << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// O(n * log(n))

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int count(int n, int d) {
	int res = n / d;
    for(int i = 2; i * i <= n; i++) {
    	if(n % i == 0) {
    		while(n % i == 0) {
    			n /= i;
    		}
    		// res *= (i - 1);
    		// res /= i;
    		res -= res / i;
    	}
    }
    if(n > 1) {
    	//res *= (n - 1);
    	//res /= n;
    	res -= res / n;
    }
    return res;
}
void solve() {
   int n; cin >> n;
   int sum = 0;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   		int d1 = i;
   		int d2 = n / i;
   		sum += d1 * count(n, d1);
   		if(d1 != d2) {
   			sum += d2 * count(n, d2);
   		}
   	}
   }
   cout << sum << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int phi[N];
void solve() {
   int n; cin >> n;
   int sum = 0;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   		int d1 = i;
   		int d2 = n / i;
   		sum += d1 * phi[n / d1];
   		if(d1 != d2) {
   			sum += d2 * phi[n / d2];
   		}
   	}
   }
   cout << sum << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i <= N; i++) phi[i] = i;
    for(int i = 2; i <= N; i++) {
    	if(phi[i] == i) {
    		for(int j = i; j <= N; j += i) {
    			// phi[j] /= i;
    			// phi[j] *= (i - 1);
    			phi[j] -= phi[j] / i;
    		}
    	}
    }
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
