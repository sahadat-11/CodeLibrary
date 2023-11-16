//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  for(int i = 0; i <= n; i++) {
    if(a[i] != i) cout << i << "\n";
  }
  return 0; 
}
// O(n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int sum1 = 0;
  for(int i = 0; i < n; i++) {
    sum1 += a[i];
  }
  int sum2 = n * (n + 1) / 2;
  cout << sum2 - sum1 << "\n";
  return 0; 
}
//O(n);// that can be overflow if n is large

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int XOR = 0;
  for(int i = 0; i < n; i++) {
    XOR ^= a[i];
  }
  for(int i = 0; i <= n; i++) {
    XOR ^= i;
  }
  cout << XOR << "\n";
  return 0; 
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >> n; int a[n];
for(int i = 0; i < n; i++) cin >> a[i];
// long long sum = 0;
// for(int i = 0; i < n; i++)) sum += a[i];
// long long sum1 = n * (n + 1) / 2;
// return sum1 - sum;
int XOR = 0;
int n = nums.size();
for(int i = 0; i < n; i++) {
XOR ^= (a[i] ^ i);
}
XOR ^= (n);
cout << XOR << endl;
return 0;
}

//https://prnt.sc/mysAnAaFR4wm
//https://youtu.be/iCrQG_kbuP0?si=j5EypKaaA-682cwe
