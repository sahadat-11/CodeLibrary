//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 8;
bitset<N>f; // initially false;
void sieve() {
   f[0]=f[1]=true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
    } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  vector<int> prime;
  for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
  }
  for(auto p : prime) cout << p << " ";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   return 0;
}

// approach 2:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 8;
bitset<N>f; // initially false;
void sieve() {
   f[0]=f[1]=true; 
    for(ll i = 2; i * i <= N; i++){
     if(!f[i]){
          for(ll j = i * i; j <= N; j += i) f[j]=true;
     }
  }
  vector<int> prime;
  for(int i = 2; i <= N; i++) {
    if(!f[i]) prime.push_back(i);
  }
  for(auto p : prime) cout << p << " ";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   return 0;
}

// approach 3: 

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sieve(ll n) {
  bool f[n+1];
  memset(f,false,sizeof(f));
  for(int i = 2; i * i <= n; i++){
     if(!f[i]){
          for(int j= i * i ; j <= n;j += i) f[j]=true;
     }
  }
  vector<int> prime;
  for(ll i=2;i<=n;i++){
     if(!f[i]) prime.push_back(i);
  }
  for(auto u : prime) cout << u << " ";
}
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n;cin>>n;
     sieve(n);

 }
//https://prnt.sc/lHjOB7cUQVqn