//In The Name of ALLAH
// Right Shift
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   while(n) {
      if(n & 1) cnt++;  
      n >>= 1;
   }
   cout << cnt << endl;
   return 0;
}

//In The Name of ALLAH
// Right Shift
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int i = 1; i <= 32; i++) {
      // if(n & (1 << i)) cnt++;
      int x = 1 << i;
      if(x & n) cnt++;
   }
   cout << cnt << endl;
   return 0;
}

// https://prnt.sc/oFzKjPE-inPZ