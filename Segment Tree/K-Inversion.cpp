//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e4 + 7, K = 12;
int a[N], dp[N];
   
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int j = 1; j <= n; j++) {
    //dp[j] = number of indices i < j such that a[i] > a[j];
    for(int i = 1; i < j; i++) {
      if(a[i] > a[j]) {
        dp[j]++;
      }
    }
  }
  int ans = 0;
  for(int j = 1; j <= n; j++) {
    ans += dp[j];
  }
  cout << ans << "\n";
  return 0;
}

// Number of Inversion


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e4 + 7, K = 12, mod = 1e9;
int a[N], dp[N][K];

int t[4 * N];
int merge(int l, int r) { // change this
  return (l + r) % mod;
}

int query(int n, int b, int e, int i, int j) { //(i, j) = range
  if(b > j or e < i) return 0; // totally out
  if(b >= i and e <= j) {// totally in
    return t[n];
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void update(int n, int b, int e, int i, int x) {
  if(b > i or e < i) return;
  if(b >= i and e <= i) {
    t[n] += x;
    t[n] %= mod;
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  update(l, b, mid, i, x);
  update(r, mid + 1, e, i, x);
  t[n] = merge(t[l], t[r]);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, tot_k; cin >> n >> tot_k;
  int mx = 0;
  for(int i = 1; i <= n; i++) { 
    cin >> a[i];
    mx = max(mx, a[i]);
  }
  for(int k = 1; k <= tot_k; k++) {
    for(int j = 1; j <= n; j++) {
      //dp[j][k] = number of indices of k_length indices i1 < i2 < i3....ik;
      // such that ik = j and a[i1] > a[i2] ....a[ik];
      if(k == 1) {
        dp[j][k] = 1;
        continue;
      }
      // for(int i = 1; i < j; i++) {
      //   if(a[i] > a[j]) {
      //     dp[j][k] += dp[i][k - 1];
      //     dp[j][k] %= mod;
      //   }
      // }
      dp[j][k] = query(1, 1, mx, a[j] + 1, mx);
      update(1, 1, mx, a[j], dp[j][k - 1]);
    }
    for(int i = 0; i <= 4 * N; i++) {
      t[i] = 0;
    }
  }
  int ans = 0;
  for(int j = 1; j <= n; j++) {
    ans += dp[j][tot_k];
    ans %= mod;
  }
  cout << ans << "\n";
  return 0;
}

// (k * N * log(N))  
// Number of k-Inversion
// if values are small;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e4 + 7, K = 12, mod = 1e9;
int a[N], dp[N][K];

int t[4 * N];
int merge(int l, int r) { // change this
  return (l + r) % mod;
}

int query(int n, int b, int e, int i, int j) { //(i, j) = range
  if(b > j or e < i) return 0; // totally out
  if(b >= i and e <= j) {// totally in
    return t[n];
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void update(int n, int b, int e, int i, int x) {
  if(b > i or e < i) return;
  if(b >= i and e <= i) {
    t[n] += x;
    t[n] %= mod;
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  update(l, b, mid, i, x);
  update(r, mid + 1, e, i, x);
  t[n] = merge(t[l], t[r]);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, tot_k; cin >> n >> tot_k;
  set<int> st;
  for(int i = 1; i <= n; i++) { 
    cin >> a[i];
    st.insert(a[i]);
  }
  int mx = 0;
  map<int, int> id;
  for(auto x : st) {
    id[x] = ++mx;
  }
  for(int i = 1; i <= n; i++) {
    a[i] = id[a[i]];
  }
  for(int k = 1; k <= tot_k; k++) {
    for(int j = 1; j <= n; j++) {
      //dp[j][k] = number of indices of k_length indices i1 < i2 < i3....ik;
      // such that ik = j and a[i1] > a[i2] ....a[ik];
      if(k == 1) {
        dp[j][k] = 1;
        continue;
      }
      // for(int i = 1; i < j; i++) {
      //   if(a[i] > a[j]) {
      //     dp[j][k] += dp[i][k - 1];
      //     dp[j][k] %= mod;
      //   }
      // }
      dp[j][k] = query(1, 1, mx, a[j] + 1, mx);
      update(1, 1, mx, a[j], dp[j][k - 1]);
    }
    for(int i = 0; i <= 4 * N; i++) {
      t[i] = 0;
    }
  }
  int ans = 0;
  for(int j = 1; j <= n; j++) {
    ans += dp[j][tot_k];
    ans %= mod;
  }
  cout << ans << "\n";
  return 0;
}

// (k * N * log(N))  
// Number of k-Inversion
// if values are Big;



