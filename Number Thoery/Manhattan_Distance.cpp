//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1), pre(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a.begin() + 1, a.end());
  for(int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += ((i - 1) * a[i] - (pre[i - 1]));
  }
  cout << sum << "\n";
  return 0;
}

// this is for 1D array;


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
int n;
#define int long long

int cal_sum(vector<int> a) {
    vector<int> pre(n + 1, 0);
    for(int i = 1; i <= n; i++) {
      pre[i] = pre[i - 1] + a[i];
    }
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += ((i - 1) * a[i] - (pre[i - 1]));
    }
    return sum;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  vector<int> a(n + 1), b(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  sort(a.begin() + 1, a.end());
  sort(b.begin() + 1, b.end());
  int sum1 = cal_sum(a);
  int sum2 = cal_sum(b);
  cout << sum1 + sum2 << "\n";
  return 0;
}

// This for 2D;

// https://www.geeksforgeeks.org/sum-manhattan-distances-pairs-points/


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
int n;
#define int long long

int cal_sum(vector<int> a) {
    int pre_sum = 0, ans = 0;
    for(int i = 0; i < n; i++) {
      ans += (i * a[i] - pre_sum);
      pre_sum += a[i];
    }
    return ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int sum1 = cal_sum(a);
  int sum2 = cal_sum(b);
  cout << sum1 + sum2 << "\n";
  return 0;
}
