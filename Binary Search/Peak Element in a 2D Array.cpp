//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
int n, m;
bool is_valid(int i, int j) {
  return i >= 0 and i < n and j >= 0 and j < m;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 cin >> n >> m; int a[n][m];
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < m; j++) cin >> a[i][j];
  }
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < m; j++) {
  		bool flag = true;
  		for(int k = 0; k < 4; k++) {
  			int nxt_i = i + di[k];
            int nxt_j = j + dj[k];
  			if(is_valid(nxt_i, nxt_j)) {
  				if(a[i][j] < a[nxt_i][nxt_j]) flag = false; 
  			} 
  		}
  		if(flag) {
  			cout << i << " " << j;
  			return 0;
  		}
  	}
  }
  return 0;
}
// O(n * m * 4);