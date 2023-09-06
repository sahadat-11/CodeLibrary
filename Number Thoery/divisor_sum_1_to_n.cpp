//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int divs[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
     for(int j = i; j < N; j += i) {
       divs[j] += i;
     }
   }
   for(int i = 1; i <= 10; i++) cout << divs[i] << " ";
   return 0;
}
