//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  bool flag = false;
  for(int i = 0; i < n ; i++) cin >> a[i];
  for(int i = 0; i < n - 2; i++) {
  	for(int j = i + 1; j < n - 1; j++) {
  		for(int k = j + i; k < n; k++) {
  			if(a[i] + a[j] + a[k] == 0) {
  				cout << a[i] << " " << a[j] << " " << a[k] << "\n";
  				flag = true;
  			}
  		}
  	}
  }
  if(!flag) cout << "NOT FOUND";
  return 0;
}
// O(n * n * n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  bool flag = false;
  for(int i = 0; i < n - 1; i++) {
  	int l = i + 1, r = n - 1;
  	while(l < r) {
  		if(a[i] + a[l] + a[r] == 0) {
  		cout << a[i] << " " << a[l] << " " << a[r] << endl;
  		flag = true;
  		l++, r--;
  	   }
  	   if(a[i] + a[l] + a[r] < 0) {
  		l++;
  	  }
  	  else r--;
  	}
  }
  if(!flag) cout << "NOT FOUND";
  return 0;
}
// O(n * n) // two pointer

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  bool flag = false;
  for(int i = 0; i < n - 1; i++) {
  	set<int> s;
  	for(int j = i + 1; j < n; j++) {
  		int reqired = -(a[i] + a[j]);
  		if(s.find(reqired) != s.end()) {
  			cout << a[i] << " " << a[j] << " " << reqired << endl;
  			flag = true;
  		}
  		else s.insert(a[j]);
  	}
  }
  if(!flag) cout << "NOT FOUND";
  return 0;
}
// O(n * n * log(n)) // hasing
