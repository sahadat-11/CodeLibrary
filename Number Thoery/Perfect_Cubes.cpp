//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   //for(int i = 1; i < 100; i++) cout << spf[i] << " ";
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) {
     int k; cin >> k;
     int val = 1;
     while(k--) {
       int x; cin >> x;
       val *= x;
     }
     a[i] = val;
   }
   //for(int i = 0; i < n; i++) cout << a[i] << " ";
   //cout << "\n";
   int cnt = 0;
   for(int i = 0; i < n; i++) {
     for(int j = i + 1; j < n; j++) {
       for(int k = j + 1; k < n; k++) {
         for(int l = k + 1; l < n; l++) {
           int mul = a[i] * a[j] * a[k] * a[l];
           //cout << mul << endl;
           int x = (int)round(pow(mul, 1.0 / 3.0));
           //cout << pow(mul, 1.0 / 3) << endl;
           //cout << mul << " " << x << " " << pow(x, 3) << endl;
           if(pow(x, 3) == mul) cnt++;
         }
       }
     }
   }
   cout << cnt << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int spf[N];
bool valid(ll n) {
  ll l = 0, r = n;
  while(l <= r) {
    ll mid = l + (r - l) / 2;
    ll mul = mid * mid * mid;
    if(mul == n) return true;
    if(mul > n) {
      r = mid - 1;
    }
    else l = mid + 1;
  }
  return false;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   //for(int i = 1; i < 100; i++) cout << spf[i] << " ";
   ll n; cin >> n; ll a[n];
   for(ll i = 0; i < n; i++) {
     ll k; cin >> k;
     ll val = 1;
     while(k--) {
       ll x; cin >> x;
       val *= x;
     }
     a[i] = val;
   }
   ll cnt = 0;
   for(ll i = 0; i < n; i++) {
     for(ll j = i + 1; j < n; j++) {
       for(ll k = j + 1; k < n; k++) {
         for(ll l = k + 1; l < n; l++) {
           ll mul = a[i] * a[j] * a[k] * a[l];
           if(valid(mul)) cnt++;
         }
       }
     }
   }
   cout << cnt << "\n";
   return 0;
}