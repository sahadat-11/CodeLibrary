//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int cl(int a[], int n, int value) {
	int low = 0, high = n - 1;
	int ans = -1;
	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(a[mid] == value) return a[mid];
		else if(a[mid] > value) {
			ans = a[mid];
			high = mid - 1;
		}
		else low = mid + 1;
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
    int value; cin >> value;
    cout << cl(a, n, value);


    return 0;
}
