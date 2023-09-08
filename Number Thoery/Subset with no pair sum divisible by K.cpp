//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int fre[k] = {0};
  for(int i = 0; i < n; i++) {
    fre[a[i] % k]++;
  }
  int ans = min(fre[0], 1); // if we take 2 that create pair, so we take most 1(it contain 1 or more) 
 or no take if there is no element;
  if(k % 2 == 0) fre[k / 2] = min(fre[k / 2], 1); // if we take 2 that create pair, so we take atmost 1    if contain one or more; else 0 if there is no element;
  for(int i = 1; i <= k / 2; i++) { 
    ans += max(fre[i], fre[k - i]);
  }
  cout << ans << "\n";
  return 0;
}
