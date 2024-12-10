//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string binary = "";
   while(n) {
      binary += (n % 2 + '0'); // int to char;
      n /= 2;
   }
   reverse(binary.begin(), binary.end());
   cout << binary << "\n";
   return 0;
}
//Complexity O(log n)
//https://prnt.sc/oT2xQkR-mUmF



   --module-path "C:\JavaFxsetup\openjfx-21.0.4_windows-x64_bin-sdk\javafx-sdk-21.0.4\lib" --add-modules javafx.controls,javafx.fxml,javafx.graphics