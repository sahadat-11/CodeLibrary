//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, target; cin >> n >> target; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int last = 0, ans = INT_MAX;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += a[i];
    while(sum > target) {
       ans = min(ans, i - last + 1);
       sum -= a[last++];
    }
  }
  if(ans == INT_MAX) cout << 0 << "\n"; // no subarray found
  else cout << ans << "\n";
  return 0;
}
