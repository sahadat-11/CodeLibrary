//In The Name of ALLAH
// With Legendre formula
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int c = 0;
   for(int i = 5; i <= n; i += 5) {
      int x = i;
      while(x % 5 == 0) {
         x /= 5;
         c++;
      }
   }
   cout << c << "\n";
   return 0;
}

// approach 2;
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int n; cin >> n;
  int cnt = 0;
  while (n) {
    cnt += n / 5;
    n /= 5;
  }
  cout << cnt << endl;
  return 0;
}
