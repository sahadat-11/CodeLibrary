//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int pre_cal[N];
bool cnt_divisors_3(int n) {
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      divs.push_back(i);
      if(i != n / i) {
        divs.push_back(n / i);
      }
    }
   }
   if((int)divs.size() == 3) return true;
   return false;
}
void solve() {
   int n; cin >> n;
   cout << pre_cal[n] << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // for(int i = 0; i < N; i++) {
  //    if(cnt_divisors_3(i)) cout << i << " " << sqrt(i) << "\n";
  //  }
  for(int i = 1; i < N; i++) {
    if(cnt_divisors_3(i)) {
      pre_cal[i] = pre_cal[i - 1] + 1;
    }
    else pre_cal[i] = pre_cal[i - 1];
  }
  //for(int i = 1; i <= 100; i++) cout << pre_cal[i] << endl;
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


// n <= 10^12
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7,  mod = 1e9 + 7;
#define int long long
bitset<N> f;
vector<int> prime;
void solve() {
   int n; cin >> n;
   int cnt = 0;
   for(auto p : prime) {
    if(p * p > n) break;
    cnt++;
   }
   cout << cnt << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[0] = f[1] = true; 
  for(int i = 4; i <= N; i += 2) f[i] = true;
  for(int i = 3; i * i <= N; i += 2) {
    if(!f[i]) {
    for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
   } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://www.geeksforgeeks.org/problems/3-divisors3942/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


// n <= 10^12 print all 1 to n
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7,  mod = 1e9 + 7;
#define int long long
bitset<N> f;
vector<int> prime;
void solve() {
   int n; cin >> n;
   for(auto p : prime) {
    if(p * p > n) break;
    cout << p * p << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[0] = f[1] = true; 
  for(int i = 4; i <= N; i += 2) f[i] = true;
  for(int i = 3; i * i <= N; i += 2) {
    if(!f[i]) {
    for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
   } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
  }
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
