//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
#define int long long
void solve() {
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  set<int> st;
  for(int i = 0; i < n; i++) st.insert(a[i]);
  int id = 0;
  map<int, int> mp;
  for(auto x : st) {
    mp[x] = ++id; // for 1 indexing
  }
  for(int i = 0; i < n; i++) {
    a[i] = mp[a[i]];
    cout << a[i] << " ";
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// it is slower when 10^6;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
#define int long long
void solve() {
  int n; cin >> n;
  vector<int> a(n); // 100, 9, 10, 10, 9
  for(int i = 0; i < n; i++) cin >> a[i];
  vector<int> b = a;
  sort(b.begin(), b.end()); // 9, 9, 10, 10, 100
  b.resize(unique(b.begin(), b.end()) - b.begin());
  // unique function 9, 10, 100, 9, 10;
  // resize 9, 10, 100;
  for(int i = 0; i < n; i++) {
    a[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1; // for 1 indexing
  }
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// it is faster



//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4 + 7;
int a[N], b[N], ans[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int ind = 1;
    map<int,int> mp;
    for(int i = 1; i <= n; i++) {
      if(!mp[a[i]]) {
        mp[a[i]] = ind;
        ind++;
      }
    }
    for(int i = 1; i <= n; i++) {
      a[i] = mp[a[i]];
    }
    for(int i = 1; i <= n; i++) {
      cout << a[i] << " ";
    }
    return 0;  
}



//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4 + 7;
int a[N], b[N], ans[N];
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        for(int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
            for(int k = a[i]; k <= b[i]; k++) {
                ans[k]++;
            }
        }
        while(q--) {
            int k; cin >> k;
            cout << ans[k] << "\n";
        }
    }
    
    return 0;  
}
// n = 10^5, l, r(0 to 10^8);
// O(n * r) == (10^5 * 10^8)

//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4 + 7;
int a[N], b[N], Q[N], ans[3 * N];
int32_t main() {
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, cs = 0; cin >> t;
    while(t--) {
      cout << "Case " << ++cs << ":\n";
      int n, q; cin >> n >> q;

      // doing co_ordinate compression
      set<int> all;
      for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        all.insert(a[i]);
        all.insert(b[i]);
      }
      for(int i = 1; i <= q; i++) {
        cin >> Q[i];
        all.insert(Q[i]);
      }
      map<int, int> mp;
      int id = 0;
      for(auto x : all) {
        mp[x] = ++id;
      }
      for(int i = 1; i <= n; i++) {
        a[i] = mp[a[i]];
        b[i] = mp[b[i]];
      }
      for(int i = 1; i <= q; i++) {
        Q[i] = mp[Q[i]];
      }
      for(int i = 1; i <= n; i++) {
        for(int k = a[i]; k <= b[i]; k++) {
          ans[k]++;
        }
      }
      for(int i = 1; i <= q; i++) {
        int k = Q[i];
        cout << ans[k] << "\n";
      }
      for(int i = 1; i <= id; i++) {
        ans[i] = 0;
      }
    }
    
    return 0;  
}

// n = 10^5, l, r(0 to 10^8);
// O(n * n) == (10^5 * 10^5)
// https://lightoj.com/problem/points-in-segments-ii