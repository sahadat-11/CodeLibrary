//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   int x = sqrtl(n);
   if(x * x == n) cout << "It has odd numbers of divisors\n";
   else cout << "No\n";
   return 0;
}
// O(sqrt(n));

// every divisor contains pair divisors (one is less square and other is greater than square)
// if number is square root is has (i == n / i)
// so divisors is odd 

// 1 to 10 ^ 12 odd divisor numbers:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i <= 1000000; i++) {
     cout << i * i << " ";
   }
   return 0;
}
// complexity O(10 ^ 6);