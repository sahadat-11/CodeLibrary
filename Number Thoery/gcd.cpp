//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int GCD(int a, int b) {
	if(a == 0) return b;
	if(b == 0) return a;
	if(b > a) swap(a, b);
	return GCD(a - b, b);
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   cout << GCD(a, b);
   return 0;
}
// Complexity O(min(a, b))

 
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int GCD(int a, int b) {
	if(a == 0) return b;
	if(b == 0) return a;
	if(b > a) swap(a, b);
	return GCD(a % b, b);
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   cout << GCD(a, b);
   return 0;
}
// Complexity O(log(min(a, b))

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   cout << __gcd(a, b);
   return 0;
}
// Complexity O(log(min(a, b))
  
  // https://prnt.sc/oySyBWoaFPnJ
  // https://prnt.sc/fGylYp3tawMB
  // https://prnt.sc/6TCm7oqYEIkA
  // https://prnt.sc/cBhqUCKogAzJ
 