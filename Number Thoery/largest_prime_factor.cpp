//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int spf[N], hpf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
       for(int j = i; j < N; j += i) {
         spf[j] = min(spf[j], i);
         hpf[j] = i;
       }
     }
   }
   //(n * log(n))
   //for(int i = 1; i <= 100; i++) cout << spf[i] << " " << hpf[i] << endl;;
   
   int n; cin >> n;
   cout << hpf[n] << "\n";
   return 0;
}
// precalculated O(1);

// approach 2:
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
   //O(n * log(n))
   //for(int i = 1; i < 10; i++) cout << spf[i] << " ";
   int n; cin >> n;
   int mx_factor = 0;
   while(n > 1) {
     mx_factor = max(mx_factor, spf[n]);
     n /= spf[n];
   }
   cout << mx_factor << "\n";
   return 0;
}
// O(log(n));


// approach 3
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int mx_factor = 0;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
         mx_factor = max(mx_factor, i);
         while(n % i == 0) {
           n /= i;
         }
      }
   }
   if(n > 1) mx_factor = max(mx_factor, n);
   cout << mx_factor << "\n";
   return 0;
}
// O(sqrt(n))


// approach 4:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> mx_fact;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
         mx_fact.push_back(i);
         while(n % i == 0) {
            n /= i;
         }
      }
   }
   if(n > 1) mx_fact.push_back(n);
   sort(mx_fact.begin(), mx_fact.end());
   int x = mx_fact.size();
   cout << mx_fact[x - 1];
   return 0;
}
// O(sqrt(n))