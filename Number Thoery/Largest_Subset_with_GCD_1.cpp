//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     
     ll n; cin >> n; ll a[n];
     for(ll i = 0; i < n; i++) cin >> a[i];
     ll gcd = a[0];
     for(ll i = 1; i < n; i++) {
          gcd=__gcd(gcd , a[i]);
     } 
     if(gcd == 1) cout << n << endl;
     else cout << -1 <<endl;

    return 0;

 }
