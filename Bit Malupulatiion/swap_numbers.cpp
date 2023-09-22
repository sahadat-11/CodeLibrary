//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a = 10, b = 5;
   cout << "Before : " << "a = " << a << " b = " << b << endl;
   a = a^b;
   b = a^b; //a = a^b; // a^b^b = b;
   a = a^b; // a = a^b, b = a; // a^b^a = a
    cout << "Before : " << "a = " << a << " b = " << b << endl;
   return 0;
}
// https://prnt.sc/S1f9ZdQbxb_q