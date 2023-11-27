//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const int N = 5000005;
int phi[N];
ull pref_sum[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int p = 1; p <= N; p++) phi[p] = p;
  for(int p = 2; p <= N; p++) { 
    if(phi[p] == p) {//(phi[p] == p) that means p is prime
      for(int j = p; j < N; j += p) {
         phi[j] -= phi[j] / p;
      }
    }
  }
 for(int i = 1; i <= 10; i++) cout << phi[i] << " ";
  return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const int N = 5000005;
int phi[N];
ull pref_sum[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int p = 1; p <= N; p++) phi[p] = p;
  for(int p = 2; p <= N; p++) { 
    if(phi[p] == p) {
      for(int j = p; j < N; j += p) {
         phi[j] -= phi[j] / p;
      }
    }
  }
  pref_sum[1] = (ull)0;
  for(int i = 2; i <= N; i++) {
    pref_sum[i] = ((ull)phi[i] * (ull)phi[i]) + pref_sum[i - 1];
  }
  //for(int i = 1; i <= 10; i++) cout << phi[i] << " ";
  int t; cin >> t;
  for(int i = 1; i <= t; i++){
    int a, b; cin >> a >> b;
    ull ans = pref_sum[b] - pref_sum[a - 1];
    cout << "Case " << i << ": " << ans << "\n";
  }
  return 0;
}

// https://prnt.sc/lRUiaLUepq-q 
// https://prnt.sc/Mxrbud_ZU2RM
// https://prnt.sc/csXVbcf6USav
