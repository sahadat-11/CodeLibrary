//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int find_value(int a[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;
    while(low <= high) {
    	int mid = low + (high - low) / 2;
    	if(a[mid] >= x) {
    		ans = a[mid];
    		high = mid - 1;
    	}
    	else low = mid + 1;
    }
    return ans;
}
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int x; cin >> x;
    int ans = find_value(a, n, x);
    cout << ans << "\n";
    return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int x; cin >> x;
    int indx = lower_bound(a, a + n, x) - a;
    cout << a[indx] <<  "\n";
    return 0;
}
