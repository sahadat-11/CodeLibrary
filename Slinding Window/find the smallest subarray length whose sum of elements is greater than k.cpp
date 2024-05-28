//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int mn = INT_MAX;
  for(int i = 0; i < n; i++) {
  	int sum = 0, cnt = 0;
  	for(int j = i; j < n; j++) {
  		sum += a[j];
  		cnt++;
  		if(sum > k) {
  			mn = min(mn, cnt);
  			sum = 0, cnt = 0;
  		}
  	}
  }
  if(mn == INT_MAX) cout << "IMPOSSIBLE\n";
  else cout << mn << endl;
  return 0;
}
// O(n * n);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int last = 0, mn = INT_MAX;
  int sum = 0;
  for(int i = 0; i < n; i++) {
  	sum += a[i];
  	while(sum > k) {
  	  mn = min(mn, i - last + 1);
  	  sum -= a[last++];
  	}
  }
  if(mn == INT_MAX) cout << "IMPOSSIBLE\n";
  else cout << mn << "\n";
  return 0;
}
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int start = 0, end = 0, mn = INT_MAX;
  int sum = 0;
  while(end < n) {
  	 while(sum <= k and end < n) {
  	 	sum += a[end++];
  	 }
  	 while(sum > k and start < n) {
  	 	mn = min(mn, end - start);
  	 	sum -= a[start++];
  	 } 
  }
  if(mn == INT_MAX) cout << "IMPOSSIBLE\n";
  else cout << mn << "\n";
  return 0;
}
// O(n); // sliding window
