//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n], b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  int c[n + m];
  int i = 0, j = 0, k = 0;
  while(i < n and j < m) {
  	if(a[i] > b[j]) {
  		c[k++] = b[j++];
  	}
  	else {
  		c[k++] = a[i++];
  	}
  }
  while(i < n) {
  	c[k++] = a[i++];
  }
  while(j < m) {
  	c[k++] = b[j++];
  }
  for(int i = 0; i < n + m; i++) cout << c[i] << " ";
  return 0;
}