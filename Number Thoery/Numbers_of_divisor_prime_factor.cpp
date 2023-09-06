//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int n; cin >> n;
    int div = 1;
    for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
        int exp = 0;
        while(n % i == 0) {
          exp++;
          n /= i;
        }
        div *= (exp + 1);
      }
    }
    if(n > 1) div *= (1 + 1);
    cout << div << "\n";
    return 0;
}
// https://prnt.sc/Haa8KxQheDg7