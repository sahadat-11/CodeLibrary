//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
     if(n % i == 0) {
       divs.push_back(i);
       if(i != n / i) divs.push_back(n / i);
     }
   }
   int sum = 0;
   sort(divs.begin(), divs.end());
   for(auto u : divs) sum += u;
   cout << sum << "\n";
    return 0;
}
// O(sqrt(n));