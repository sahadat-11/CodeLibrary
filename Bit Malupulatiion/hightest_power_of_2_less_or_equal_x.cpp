//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int k = 31 - (__builtin_clz(n));
   cout << (1 << k) << endl;
   return 0;
}
//O(log2(n))


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int k = log2(n);
   cout << (1 << k) << endl;
   return 0;
}
//O(log2(n))

//https://practice.geeksforgeeks.org/problems/finding-position2223/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article