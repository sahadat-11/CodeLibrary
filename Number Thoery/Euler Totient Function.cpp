//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
    	if(__gcd(i, n) == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
// O(n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int res = n;
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
    cout << res << endl;
    return 0;
}
// O(sqrt(n));

// euler toition 1 to n 
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int phi(int n) {
	int res = n;
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
    	// res *= (n - 1);
    	// res /= n;
    	res -= res / n;
    }
    return res;
}
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
    	cout << phi(i) << "\n";
    }
    return 0;
}
// O(n * sqrt(n))

// euler toition 1 to n 
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int phi[N];
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
    for(int i = 1; i <= 10; i++) cout << phi[i] << "\n";
    return 0;
}
// // O(n * log(n))
// https://prnt.sc/KRCCVmtCwyW8
// https://prnt.sc/lRUiaLUepq-q 
// https://prnt.sc/Mxrbud_ZU2RM
// https://prnt.sc/csXVbcf6USav