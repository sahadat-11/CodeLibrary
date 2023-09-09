//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; 
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
     if(n % i == 0) {
       divs.push_back(i);
       if(i != n / i) divs.push_back(n / i);
     }
   }
   sort(divs.begin(), divs.end());
   if(divs.size() < k) cout << - 1 << "\n";
   else cout << divs[k - 1] << "\n";

    return 0;
}
// approach 2:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n, k; cin >> n >> k;
   vector<ll> divs1, divs2;
   for(ll i = 1; i * i <= n; i++) {
      if(n % i == 0) {
         divs1.push_back(i);
         if(i != n / i) divs2.push_back(n / i);
      }
   }
   // for(auto u : divs1) cout << u << " "; cout << "\n";
   // for(auto u : divs2) cout << u << " ";
   reverse(divs2.begin(), divs2.end());
   // vector append
   divs2.insert(divs2.begin(), divs1.begin(), divs1.end());
   //for(auto u : divs2) cout << u << " ";
   if(divs2.size() < k) cout << - 1 << "\n";
   else cout << divs2[k - 1] << "\n";
   return 0;
}
