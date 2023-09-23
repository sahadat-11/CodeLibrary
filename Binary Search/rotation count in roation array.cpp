//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int roatation_cnt(int a[], int n) {
	int low = 0, high = n - 1;
	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(a[mid] < a[mid - 1]) return mid;
		if(a[mid] > a[mid + 1]) return mid + 1;
		if(a[mid] > a[high]) {
			low = mid + 1;
		}
		else high = mid - 1;
	}
}
int main() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << roatation_cnt(a, n);
    return 0;
}
