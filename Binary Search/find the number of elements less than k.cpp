//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int lowerbound(int a[], int n, int x) {
    int low = 0, high = n - 1;
    int ans;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(a[mid] < x) low = mid + 1;
        else if(a[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int x; cin >> x;
    int lb = lowerbound(a, n, x);
    cout << lb << endl;
    return 0;
}

// approach 2:

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;
    int x; cin >> x;
    int lb = lower_bound(a, a + n, x) - a; // using stl
    cout << lb; 
    return 0;
}
