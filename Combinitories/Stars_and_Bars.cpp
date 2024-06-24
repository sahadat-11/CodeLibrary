//you have N identical objects (which we represent as stars) 
//that you want to distribute into K distinct groups, 
//such that each group can have 0 to N number of elements

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5, mod = 1e9 + 7;
#define int long long
int fact[N], invf[N];

int binexp(int a, int b) {
	int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
	while(b) {
		if(b & 1) {
			ans = (ans * 1ll * a) % mod;
		}
		a = (a * 1ll * a) % mod;
		b >>= 1;
	}
	return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[n - r] % mod;
}

void precal() {
  fact[0] = 1;
  for(int i = 1; i < N; i++) {
    fact[i] = (fact[i - 1] * 1ll * i) % mod;
  }
  invf[N - 1] = binexp(fact[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();
  
  int n, k; cin >> n >> k;

  int ans1 = nCr(n + k - 1, k - 1);
  int ans2 = nCr(n + k - 1, n);
  cout << ans1 << " " << ans2 << "\n";
  return 0;
}

//you have N identical objects (which we represent as stars) 
//that you want to distribute into K distinct groups, 
//such that each group can have 1 to N number of elements

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5, mod = 1e9 + 7;
#define int long long
int fact[N], invf[N];

int binexp(int a, int b) {
	int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
	while(b) {
		if(b & 1) {
			ans = (ans * 1ll * a) % mod;
		}
		a = (a * 1ll * a) % mod;
		b >>= 1;
	}
	return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[n - r] % mod;
}

void precal() {
  fact[0] = 1;
  for(int i = 1; i < N; i++) {
    fact[i] = (fact[i - 1] * 1ll * i) % mod;
  }
  invf[N - 1] = binexp(fact[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();
  
  int n, k; cin >> n >> k;

  int ans = nCr(n - 1, k - 1);
  cout << ans << "\n";
  return 0;
}


//a1+a2+a3…aK=N, where a1≥L1,a2≥L2,a3≥L3…aK≥Ln
//is same as a′1+a′2+a′3…a′K=N–L1–L2–L3…LK, 
//where a′1,a′2,a′3…a′K≥0.

// solution : https://prnt.sc/pP2X0qwAiKlp



//a1 + a2 + a3 ... + ar <= N  Garbage Partition
// https://prnt.sc/CwUiVbxLnTzL

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5, mod = 1e9 + 7;
#define int long long
int fact[N], invf[N];

int binexp(int a, int b) {
	int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
	while(b) {
		if(b & 1) {
			ans = (ans * 1ll * a) % mod;
		}
		a = (a * 1ll * a) % mod;
		b >>= 1;
	}
	return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[n - r] % mod;
}

void precal() {
  fact[0] = 1;
  for(int i = 1; i < N; i++) {
    fact[i] = (fact[i - 1] * 1ll * i) % mod;
  }
  invf[N - 1] = binexp(fact[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();
  
  int n, k; cin >> n >> k;

  int ans = nCr(n + k, k);
  cout << ans << "\n";
  return 0;
}
