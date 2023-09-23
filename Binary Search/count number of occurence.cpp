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
int lastoccurrence(int a[], int n, int value) {
	int low = 0, high = n - 1;
	int ans = -1;
	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(a[mid] == value) {
			ans = mid;
			low = mid + 1;
		}
		else if(a[mid] < value) low = mid + 1;
		else high = mid - 1;
	}
	return ans;
}
int main() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int value; cin >> value;
    int fo = firstoccurrence(a, n, value);
    int lo = lastoccurrence(a, n, value);
    if(fo ==  -1 and lo == -1) cout << "NOT FOUND";
    else cout << lo - fo + 1 << "\n";


}


// approach 2:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int x; cin >> x;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
    	if(a[i] == x) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}




// approach 3:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int x; cin >> x;
    cout << upper_bound(a, a + n, x) - lower_bound(a, a + n, x);
    return 0;
}
