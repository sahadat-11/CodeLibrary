// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int workers; cin >> workers;
//    vector<int> days[workers];// 2D vector
//    for(int i = 0; i < workers; i++) {
//       int work_days; cin >> work_days;
//       for(int j = 0; j < work_days; j++) {
//          int day; cin >> day;
//          days[i].push_back(day);
//       }
//    }
//    // for(auto u : days) {
//    //    for(auto x : u) cout << x << " ";
//    //    cout << "\n";
//    // }
//    int person1 = -1, person2 = -1, mx = 0;
//    for(int i = 0; i < workers; i++) {
//       for(int j = i + 1; j < workers; j++) {
//          sort(days[i].begin(), days[i].end());
//          sort(days[j].begin(), days[j].end());
//          int a = 0, b = days[i].size();
//          int c = 0, d = days[j].size();
//          int cnt = 0;
//          while(a < b and c < d) {
//             if(days[i][a] == days[j][c]) {
//                cnt++;
//                a++; c++;
//             }
//             else if(days[i][a] > days[j][c]) c++;
//             else a++;
//          }
//          if(cnt > mx) {
//             mx = cnt;
//             person1 = i; person2 = j;
//          }
//       }
//    }
//    cout << mx << " " << person1 << " " << person2 << endl;
//    return 0;
// }
// //O(n * n * 30) // tow pointer


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int workers; cin >> workers;
   vector<int> masks(workers, 0);
   for(int i = 0; i < workers; i++) {
      int work_days; cin >> work_days;
      int mask = 0;
      for(int j = 0; j < work_days; j++) {
         int day; cin >> day;
         mask = (mask | (1 << day)); //day is set
      }
      masks[i] = mask;
   }
   
   int person1 = -1, person2 = -1, mx = 0;
   for(int i = 0; i < workers; i++) {
      for(int j = i + 1; j < workers; j++) {
         int intersect = (masks[i] & masks[j]); //if(both bit are set)
         int common_days = __builtin_popcount(intersect);//count total set bit;
         if(common_days > mx) {
            mx = common_days;
            person1 = i;
            person2 = j;
         }
      }
   }
   cout << mx << " " << person1 << " " << person2 << endl;
   return 0;
}
//O(n * n) // bit masking
// https://prnt.sc/JLWC-pI2PlRW