//Given a string, Check if the characters of the 
//given string can be rearranged to form a palindrome
// for number of Q queries

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int pre[N][26];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int n = s.size();
  for(int i = 0; i < n; i++) {
  	int x = s[i] - 'a';
  	for(int j = 0; j < 26; j++) {
      if(i == 0) {
      	if(j == x) {
      	  pre[i][j] = 1;
      	}
      }
      else {
      	if(j == x) {
      	  pre[i][j] = pre[i - 1][j] + 1;
      	}
      	else pre[i][j] = pre[i - 1][j];
      }
  	}
  }
  // for(int i = 0; i < n; i++) {
  // 	for(int j = 0; j < 26; j++) {
  // 	  cout << pre[i][j];
  // 	}
  // 	cout << "\n";
  // }
  int q; cin >> q;
  while(q--) {
  	int l, r; cin >> l >> r;
  	int cnt = 0;
  	for(int i = 0; i < 26; i++) {
  	  int x;
  	  if(l == 0) {
  	  	x = pre[r][i];
  	  }
  	  else x = pre[r][i] - pre[l - 1][i];
  	  if(x & 1) cnt++;
  	}
  	if(cnt > 1) cout << "NO\n";
  	else cout << "YES\n";
  }
  return 0;
}

// (Q * 26))



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int pre[N][26];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    string s; cin >> s;
    s = '#' + s;
    //cout << s << endl;
    for(int i = 1; i <= s.size(); i++) {
      for(int j = 0; j < 26; j++) {
        if((s[i] - 'a' == j)) {
          pre[i][j] = pre[i - 1][j] + 1;
        }
        else {
          pre[i][j] = pre[i - 1][j];
        }
      }
    }
    // for(int i = 0; i < 26; i++) {
    //   cout << pre[6][i] << endl;
    // }
    int q; cin >> q;
    while(q--) {
      int l, r; cin >> l >> r;
      l++; r++; // for 1 index;
      int cnt = 0;
      for(int i = 0; i < 26; i++) {
        int occ = pre[r][i] - pre[l - 1][i];
        //cout << occ << endl;
        if(occ % 2) cnt++;
      }
      //cout << cnt << "\n";
      if(cnt > 1) cout << "NO\n";
      else cout << "YES\n";
    }
  }
  return 0;
}

//(i to j subsrting can be possible rearrange palindrome)


// https://leetcode.com/problems/can-make-palindrome-from-substring/description/