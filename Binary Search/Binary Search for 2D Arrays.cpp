//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n][m];
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < m; j++) cin >> a[i][j];
  }
  int target; cin >> target;
  bool flag = false;
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < m; j++) {
  		if(a[i][j] == target) flag = true;
  	}
  }
  if(flag) cout << "FOUND";
  else cout << "NOT FOUND";
  return 0;
}
// O(n * m);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
bool is_found(int a[], int n, int target) {
  int l = 0, h = n - 1;
  while(l <= h) {
  	int mid = l + (h - l) / 2;
  	if(a[mid] == target) return true;
  	else if(a[mid] > target) h = mid - 1;
  	else l = mid + 1;
  }
  return false;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n][m];
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < m; j++) cin >> a[i][j];
  }
  int target; cin >> target;
  bool flag = false;
  for(int i = 0; i < n; i++) {
  	if(a[i][0] <= target and a[i][m - 1 ] >= target) {
  		if(is_found(a[i], m, target)) { // a[i] is an array;
  			flag = true;
  		}
  	}
  }
  if(flag) cout << "FOUND";
  else cout << "NOT FOUND";
  return 0;
}
// O(n * log(m));

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
bool binary(vector<vector<int>> &a, int target) {
    int n = a.size();
    int m = a[0].size();

    //apply binary search:
    int low = 0, high = n * m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m, col = mid % m;
        if (a[row][col] == target) return true;
        else if (a[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  vector<vector<int>> a;
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < m; j++) {
  		int x; cin >> x;
  		a[i].push_back(x);
  	}
  }
  int target; cin >> target;
  if(binary(a, target)) cout << "FOUND";
  else cout << "NOT FOUND";
  return 0;
}
// O(log(n * m));
