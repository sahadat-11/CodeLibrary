// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// unordered_map<char, int> mp = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

// bool isbalanced(string s) {
//    stack<char> st;
//    for(auto u : s) {
//      if(mp[u] < 0) { // starting
//         st.push(u);
//      }
//      else { // ending
//        if(st.empty()) return false;
//        else if(mp[u] + mp[st.top()] != 0) return false;
//        st.pop();
//      }
//    }
//    if(st.empty()) return true;
//    return false;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   string s; cin >> s;
//   int n = s.size();
//   int ans = 0;
//   for(int i = 0; i < n; i++) {
//     for(int j = i; j < n; j++) {
//         string x = s.substr(i, j - i + 1);
//         if(isbalanced(x)) {
//             ans = max(ans, j - i + 1);
//         }
//     }
//   }
//   cout << ans << "\n";
//   return 0;
// }

// // O(N * N * N);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size(), ans = 0;
  stack<int> st;
  st.push(-1);
  for(int i = 0; i < n; i++) {
    if(s[i] == '(') {
      st.push(i);
    }
    else {
        st.pop();
        if(st.empty()) {
            st.push(i);
        }
        else {
            ans = max(ans, i - st.top());
        }
    }
  }
  cout << ans << "\n";
  return 0;
}

// https://leetcode.com/problems/longest-valid-parentheses/description/
// https://youtu.be/G53_EUjUYcQ?si=1LoD5ILBg1iJjdq6


// With Count 

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size(), ans = 0;
  stack<int> st;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    if(s[i] == '(') {
      st.push(i); // 
    }
    else if(st.size()) {
        a[st.top()] = a[i] = 1;
        st.pop();
    }
  }
  for(int i = 1; i < n; i++) {
    if(a[i]) {
        a[i] += a[i - 1];
    }
  }
  int mx = *max_element(a.begin(), a.end());
  int cnt = count(a.begin(), a.end(), mx);
  if(mx == 0) {
    cout << 0 << " " << 1 << "\n";
  }
  else {
    cout << mx << " " << cnt << "\n";
  }
 
  return 0;
}

// https://codeforces.com/contest/5/problem/C 