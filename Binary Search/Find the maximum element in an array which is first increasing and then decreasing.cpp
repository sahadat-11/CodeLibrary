// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// int find_value(int a[], int n) {
    // int low = 0, high = n - 1;
    // while(low <= high) {
    	// int mid = low + (high - low) / 2;
    	// if(a[mid] > a[mid - 1] and a[mid] > a[mid + 1]) {
    		// return a[mid];
    	// }
    	// else if(a[mid] < a[mid + 1]) {
    		// low = mid + 1;
    	// }
    	// else high = mid - 1;
//     	
    // }
// }
// int main() {
    // int n; cin >> n; int a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // sort(a, a + n);
    // int ans = find_value(a, n);
    // cout << ans << "\n";
    // return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int find_value(int a[], int n) {
    int low = 0, high = n - 1;
    int ans = 0;
    while(low <= high) {
    	int mid = low + (high - low) / 2;
    	if(a[mid] > a[mid - 1]) {
    		ans = a[mid];
    		low = mid + 1;
    	}
    	else high = mid - 1;	
    }
    return ans;
}
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int ans = find_value(a, n);
    cout << ans << "\n";
    return 0;
}