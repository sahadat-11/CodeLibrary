//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   n--;
   int k = 31 - (__builtin_clz(n));
   cout << (1 << k) << endl;
   return 0;
}
//O(log2(n))


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   n--;
   int k = log2(n);
   cout << (1 << k) << endl;
   return 0;
}
//O(log2(n))
