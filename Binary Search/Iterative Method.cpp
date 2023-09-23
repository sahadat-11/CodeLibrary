//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binary(int a[], int n, int x) {
  int l = 0, h = n - 1;
  while(l <= h) {
  	int mid = l + (h - l) / 2;
  	if(a[mid] == x) return mid;
  	else if(a[mid] > x) {
  		h = mid - 1;
  	}
  	else l = mid + 1;
  }
  return -1;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int target; cin >> target;
  sort(a, a + n);
  int x = binary(a, n , target);
  if(x == -1) cout << "NOT FOUND";
  else cout << "FOUND IN " << x << "INDEX";
  return 0;
}
