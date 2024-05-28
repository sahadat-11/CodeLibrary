//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(int a[], int n, int x) {
	int i = 0, j = n - 1;
	while(i < j) {
		if(a[i] + a[j] == x) return true;
		// If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
		else if(a[i] + a[j] < x) i++;
		// If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
		else j--;
	}
	return false;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  if(check(a, n, x)) cout << "FOUND";
  else cout << "NOT FOUND";
  return 0;
}
