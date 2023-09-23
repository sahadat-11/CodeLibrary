//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int firstoccurrence(int a[], int n, int value) {
	int low = 0, high = n - 1;
	int ans = -1;
	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(a[mid] == value) {
			ans = mid;
			high = mid - 1;
		}
		else if(a[mid] < value) low = mid + 1;
		else high = mid - 1;
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
    int fo = firstoccurrence(a, n, value);
    if(fo ==  - 1) cout << "NOT FOUND";
    else cout << "Found the value in " << fo << " index";


}

// approach 2:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int x; cin >> x;
    cout << lower_bound(a, a + n, x) - a;
    return 0;
}


