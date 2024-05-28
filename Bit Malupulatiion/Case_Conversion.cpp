//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printbinary(int n) {
	for(int i = 10; i >= 0; i--) { // upto 10 th bit binary
		cout << ((n >> i) & 1);
	}
	cout << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(char c = 'A'; c <= 'E'; c++) {
   	 printbinary(c);
   }
   // we see that 5th bit unset in upper case;

   for(char c = 'a'; c <= 'e'; c++) {
   	 printbinary(c);
   }
   // we see that 5th bit set in lower case;
   

   // upper to lower (we need to 5th bit set)
   char u = 'B';
   char l = u | (1 << 5);
   cout << u << " " << l << "\n";


   // lower to upper (we need to 5th bit unset)
   l = 'e';
   u = l & ~(1 << 5);
   cout << u << " " << l << "\n";
   
   return 0;
}
