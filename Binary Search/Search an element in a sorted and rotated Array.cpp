//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int rotation_cnt(int a[], int n) {
	int low = 0, high = n - 1;
	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(a[mid] < a[mid - 1]) return mid;
		else if(a[mid] > a[mid + 1]) return mid + 1;
		else if(a[mid] > a[high]) low = mid + 1;
		else high = mid - 1; 
	}
}
int search_value(int a[], int low, int high, int target) {
	while(low <= high) {
		int mid = (low + high) / 2;
		if(a[mid] == target) return mid;
		else if(a[mid] < target) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}
int main() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int target; cin >> target;
	int minidx =  rotation_cnt(a, n);
	//cout << minidx;
    int first = search_value(a, 0, minidx, target);
    int second = search_value(a, minidx, n, target);
    if(first == - 1 and  second == - 1) cout << "Not found\n";
    else {
    	cout << "Found in index : ";
    	if(first = -1) cout << second;
    	else cout << first;
    }


    return 0;
}


// approach 2:

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int roated_search(int a[], int n, int value) {
	int low = 0, high = n - 1;
     	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(a[mid] == value) return mid;
		if(a[low] <= a[mid]) {
			if(value >= a[low] and value <= a[mid]) high = mid - 1;
			else low = mid + 1;
		}
		else {
			if(a[mid] <= value and value <= a[high]) low = mid + 1;
			else high = mid - 1;
		}
	}
	return -1;
}
int main() {
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
    int value; cin >> value;
    int x = roated_search(a, n, value);
    if(x == -1) cout << "Not Found";
    else cout << x << "\n";


    return 0;
}