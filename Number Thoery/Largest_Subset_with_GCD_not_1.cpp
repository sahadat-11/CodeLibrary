//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int fre[N];
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        fre[a[i]]++;
    }
    int mx = 1;
    // for(int g = 2; g <= N; g++) {  // for worst case we get tle for (n ^ 2);
    //     int cnt = 0;
    //     for(int i = 0; i < n; i++) {
    //         if(a[i] % g == 0) cnt ++;
    //     }
    //     mx = max(cnt, mx);
    // }
    // cout << mx << "\n";

    for(int g = 2; g <= N; g++) {
      int cnt = 0;
      for(int j = g; j <= N; j += g) {
        cnt += fre[j];
      }
      mx = max(cnt, mx);
      //cout << mx << endl; // NlogN; N = 1e5;
    }
    cout << mx << "\n";
    // for(int i = 0; i < 10; i++) {
    //     cout << fre[i] << " ";
    // }
    //cout << fre[2] << " " << fre[4] << " " << fre[6];
	return 0;
}
