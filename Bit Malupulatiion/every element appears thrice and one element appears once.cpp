//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int ans = 0;
   for(int i = 0; i < 32; i++) {
   	 int cnt = 0;
   	 for(int j = 0; j < n; j++) {
   	 	if(a[j] & (1 << i)) cnt++;
   	 }
   	 if(cnt % 3 != 0) ans |= (1 << i);
   }
   cout << ans << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int ans = 0;
   for(int i = 0; i < 32; i++) {
   	 int cnt = 0;
   	 for(int j = 0; j < n; j++) {
   	 	if((a[j] >> i) & 1) cnt++;
   	 }
   	 if(cnt % 3 != 0) ans |= (1 << i);
   }
   cout << ans << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
   	 mp[a[i]]++;
   }
   for(auto u : mp) {
   	 if(u.second == 1) cout << u.first << "\n";
   }
   return 0;
}
// https://prnt.sc/6yeejf5245kv