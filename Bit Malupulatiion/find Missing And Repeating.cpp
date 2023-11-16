//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int cnt[n + 1] = {0};
  for(int i = 0; i < n; i++) {
    cnt[a[i]]++;
  }
  int missing, repeat;
  for(int i = 1; i <= n; i++) {
    if(cnt[i] == 0) missing = i;
    if(cnt[i] == 2) repeat = i;
  }
  cout << missing << " " << repeat << "\n";
  return 0; 
}
O(n); //(counting)


// XOR formula
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int XOR = 0;
  for(int i = 0; i < n; i++) {
    XOR ^= a[i];
  }
  for(int i = 1; i <= n; i++) {
    XOR ^= i;
  }
  //cout << XOR << "\n";
  int first_bit_pos = -1;
  for(int i = 0; i < 32; i++) {
    if(XOR & (1 << i)) { 
      first_bit_pos = i;
      break;
    }
  }
  int XOR1 = 0, XOR2 = 0;
  for(int i = 0; i < n; i++) {
    if((1 << first_bit_pos) & a[i]) {
      XOR1 ^= a[i];
    }
    else XOR2 ^= a[i];
  }

  for(int i = 1; i <= n; i++) {
    if((1 << first_bit_pos) & i) {
      XOR1 ^= i;
    }
    else XOR2 ^= i;
  }
  //cout << XOR1 << " " << XOR2 << endl;// one is missing and one is repeatin;
  int missing, repeating;
  for(int i = 0; i < n; i++) {
    if(a[i] == XOR1) {
      repeating = a[i];
    }
    if(a[i] == XOR2) {
      repeating = a[i];
    }
  }
  if(repeating == XOR1) missing = XOR2;
  else missing = XOR1;
  cout << missing << " " << repeating << endl;
  return 0; 
}


// sum formula
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int repeating, missing;
  for(int i = 0; i < n - 1; i++) {
    if(a[i] == a[i + 1]) repeating = a[i];
  }
  ll sum1 = 0, sum2 = 0;
  for(int i = 0; i < n; i++) sum1 += a[i];
  sum1 -= repeating;// because this is occur two;
  
  sum2 = 1ll * n * (n + 1) / 2;

  missing = sum2 - sum1;

  cout << missing << " " << repeating << endl;
  return 0; 
}
// O(n)

//https://takeuforward.org/data-structure/find-the-repeating-and-missing-numbers/
//https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/
//https://prnt.sc/cuw5VRwxkoU1
//https://takeuforward.org/data-structure/find-the-repeating-and-missing-numbers/#dsa_article_video_explanation
