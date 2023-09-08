//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
ll lcmfind (int a, int b) {
     return ((a / (__gcd(a,b)) * b);
}
int main()
{
     sahadat();
     ll l , r ; cin >> l >> r;
     ll n; cin >> n; ll a[n];

     for(ll i = 0; i < n; i++) cin >> a[i];

     ll lcm = 1;

     for(ll i = 0; i < n; i++) {
          lcm = lcmfind(lcm,a[i]); 
     } 
     
     //cout << lcm <<endl;

     cout << r/lcm - (l-1)/lcm << endl;

    return 0;

 }

// Show these value;

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
ll lcmfind (int a, int b) {
     return ((a / (__gcd(a,b)) * b);
}
int main()
{
     sahadat();
     ll l , r ; cin >> l >> r;
     ll n; cin >> n; ll a[n];

     for(ll i = 0; i < n; i++) cin >> a[i];

     ll lcm = 1;

     for(ll i = 0; i < n; i++) {
          lcm = lcmfind(lcm,a[i]); 
     } 
     
     //cout << lcm <<endl;

     // if there is no value print -1;
     if(lcm < l and 2*lcm > r) { // no element
          cout << -1 <<endl;
          return 0;
     }

     // find the nearest value which is divisible by lcm;
     ll k = (l / lcm) * lcm;
     // if k is less than lcm;
     k = k + lcm;
     for(ll i = k; i <= r; i += lcm) cout << i << " ";
    return 0; 

 }
