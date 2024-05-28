//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m, x; cin >> n >> m >> x; int a[n], b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(b, b + m);
  int i = 0, j = m - 1;
  int l, r;
  int mindif = INT_MAX;
  while(i < n and j >= 0) {
  	// Check if this pair is closer than the closest pair so far
  	if(abs(a[i] + b[j] - x) < mindif) {
  		l = a[i], r = b[j];
  		mindif = abs(a[i] + b[j] - x);
  	}
  	if(a[i] + b[j] < x) i++;
  	else j--;
  }
  cout << l << " " << r << endl;
  return 0;
}
