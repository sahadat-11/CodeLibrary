//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
double eps = 1e-7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int x; cin >> x;
   double l = 0, r = x;
   while(r - l > eps) {
      double mid = l + (r - l) / 2;
      if(mid * mid < x) {
         l = mid;
      }
      else {
         r = mid;
      }
   }
   //cout << l << "\n" << r;
   cout << fixed << setprecision(10) << l << "\n" << r << "\n";
   cout << pow(x, 1.0 / 2);
   return 0;
}
// square root for eps (double value);return accurate value

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int x; cin >> x;
   int l = 0, r = x, ans = 0;
   while(l <= r) {
      int mid = l + (r - l) / 2;
      if(mid * mid <= x) {
         ans = mid;
         l = mid + 1;
      }
      else {
         r = mid - 1;
      }
   }
   cout << ans << "\n";
   cout << int(pow(x, 1.0 / 2));// type cast
   return 0;
}
// square root for int  value);return floor value

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
double eps = 1e-7;
double multiply(double mid, int n) {
   double ans = 1;
   for(int i = 1; i <= n; i++) {
      ans *= mid;
   }
   return ans;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int x, n; cin >> x >> n;
   double l = 0, r = x;
   while(r - l > eps) {
      double mid = l + (r - l) / 2;
      if(multiply(mid, n) < x) {
         l = mid;
      }
      else {
         r = mid;
      }
   }
   //cout << l << "\n" << r;
   cout << fixed << setprecision(10) << l << "\n" << r << "\n";
   cout << pow(x, 1.0 / n);
   return 0;
}
// nth root for eps (double value);return accurate value


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int multiply(int mid, int n) {
   int ans = 1;
   for(int i = 1; i <= n; i++) {
      ans *= mid;
   }
   return ans;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int x, n; cin >> x >> n;
   int l = 0, r = x, ans = 0;
   while(l <= r) {
      int mid = l + (r - l) / 2;
      if(multiply(mid, n) <= x) {
         ans = mid;
         l = mid + 1;
      }
      else {
         r = mid - 1;
      }
   }
   cout << ans << endl;
   cout << int(pow(x, 1.0 / n));
   return 0;
}
// nth root for int value);return floor value

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool perfect_suare_root(int x) {
     int l = 0, r = x;
      while(l <= r) {
        int mid = l + (r - l) / 2;
        if(mid * mid == x) return true;
        else if(mid * mid < x) l = mid + 1;
        else r = mid - 1;
     }
     return false;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int x; cin >> x;
   if(perfect_suare_root(x)) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
// perfect square root 
//https://leetcode.com/problems/valid-perfect-square/description/


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll multiply(ll x, ll n, ll mid) {
   ll ans = 1;
   for(ll i = 1; i <= n; i++) {
      ans *= mid;
      if(ans == x) return 2;//if equal
      else if(ans > x) return 1;// if large 
   }
   return 0;// if less
}
bool perfect_nth_root(ll x, ll n) {
     ll l = 0, r = x;
      while(l <= r) {
        ll mid = l + (r - l) / 2;
        ll typ = multiply(x, n, mid);
        if(typ == 2) {
          return true;
        }
        else if(typ == 1) {
           r = mid - 1;
        }
        else l = mid + 1;
     }
     return false;
} 
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll x, n; cin >> x >> n;
   if(perfect_nth_root(x, n)) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
// return true if it is perfect nth root else return false;

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll multiply(ll x, ll n, ll mid) {
   ll ans = 1;
   for(ll i = 1; i <= n; i++) {
      ans *= mid;
      if(ans == x) return 2;//if equal
      else if(ans > x) return 1;// if large 
   }
   return 0;// if less
}
ll perfect_nth_root(ll x, ll n) {
     ll l = 0, r = x;
      while(l <= r) {
        ll mid = l + (r - l) / 2;
        ll typ = multiply(x, n, mid);
        if(typ == 2) {//if equal return mid;
          return mid;
        }
        else if(typ == 1) {//if large
           r = mid - 1;
        }
        else l = mid + 1;//if less
     }
     return -1;
} 
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll x, n; cin >> x >> n;
   ll ans = perfect_nth_root(x, n);
   cout << ans << "\n";
   return 0;
}
// return nth root value if it is perfect nth root number
// else rerurn -1;
//https://www.codingninjas.com/studio/problems/nth-root-of-m_1062679?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM