//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int i = 0, j = n - 1;
  int l, r;
  int mindif = INT_MAX;
  while(i < j) {
  	// Check if this pair is closer than the closest pair so far
  	if(abs(a[i] + a[j] - x) < mindif) {
  		l = a[i], r = a[j];
  		mindif = abs(a[i] + a[j] - x);
  	}
  	if(a[i] + a[j] < x) i++;
  	else j--;
  }
  cout << l << " " << r << endl;
  return 0;
}
