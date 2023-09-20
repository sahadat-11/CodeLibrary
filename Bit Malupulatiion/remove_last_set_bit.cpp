//In The Name of ALLAH
//Left Shift
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int indx = -1;
   for(int i = 0; i < 32; i++) {
     int x = (1 << i);
     if(n & x) {
       indx = i;
       break; 
     }
   }
   //cout << indx << endl;
   int mask = ~(1 << indx);
   cout << (n & mask) << endl;
   return 0;
}

//In The Name of ALLAH
//Right Shift
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int x = n, indx = -1, cnt = 0;
   while(x) {
      if(x & 1) {
         indx = cnt;
         break;
      }
      x >>= 1;
      cnt++;
   }
   //cout << indx << endl;
   int mask = ~(1 << indx);
   cout << (n & mask) << endl;
   return 0;
}

// easy approach:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   cout << (n & (n - 1));
   return 0;
}