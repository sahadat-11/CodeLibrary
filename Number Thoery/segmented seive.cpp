//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 7;
bitset<N> f;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0]=f[1]=true; 
   for(ll i = 4; i <= N; i += 2) f[i] = true;
   for(ll i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(ll j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   vector<ll> prime;
   for(ll i = 2; i < N; i++) {
   	 if(!f[i]) prime.push_back(i);
   }
   //for(auto u : prime) cout << u << endl;
   //cout << prime.size();
   int t; cin >> t;
   while(t--) {
   	 ll l, r; cin >> l >> r;
   	 if(l == 1) l++;
   	 ll mx = r - l + 1;
   	 bool a[mx + 1] = {false};
   	 for(auto u : prime) {
   	 	if(u * u <= r) {
   	 		ll x = ((l + u - 1) / u) * u; // ceil value;
   	 		//ll x = (l / u) * u;
   	 		//if(x < l) x += u;
   	 		for(ll i = x; i <= r; i += u) {
   	 			if(i != u) {
   	 				a[i - l] = true;
   	 			}
   	 		}
   	 	}
   	 }
   	 for(int i = 0; i < mx; i++) {
   	 	if(!a[i]) cout << l + i << " ";
   	 }
   }
   return 0;
}
//https://prnt.sc/ONwAROjsdmzt 