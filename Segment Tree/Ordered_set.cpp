#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // o_set<int> se;
  // se.insert(4);
  // se.insert(2);
  // se.insert(5);
  // se.insert(4);
  // se.insert(5);
  // se.insert(7);
  // se.insert(6);
  // for(auto u : se) cout << u << " "; cout << "\n"; // 2 4 5 6 7
  // se.erase(4);
  // for(auto u : se) cout << u << " "; cout << "\n";// 2 5 6 7
  // cout << se.order_of_key(5) << '\n'; // number of elements < 5
  // cout << se.order_of_key(6) << '\n'; // number of elements < 6
  // auto it = se.find_by_order(1);// if you imagine this as a 0-indexed vector, what is se[1]?
  // cout << *it << "\n";
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    o_set<pair<int, int>> st;
    for(int i = n - 1; i >= 0; i--) {
      st.insert({a[i], i});
    }
    for(auto u : st) {
      cout << u.first << " " << u.second << endl;
    }
  return 0;
}
// (O(log n));
// all is normal set; it is using only for what is the value in target index;
// set of pair
// https://www.geeksforgeeks.org/sets-of-pairs-in-c/

// https://prnt.sc/hBr7AnM55AEK



// C++ program to demonstrate the 
// ordered set in GNU C++ 
#include <iostream> 
using namespace std; 

// Header files, namespaces, 
// macros as defined above 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

// Driver program to test above functions 
int main() 
{ 
  // Ordered set declared with name o_set 
  ordered_set o_set; 

  // insert function to insert in 
  // ordered set same as SET STL 
  o_set.insert(5); 
  o_set.insert(1); 
  o_set.insert(2); 

  // Finding the second smallest element 
  // in the set using * because 
  // find_by_order returns an iterator 
  cout << *(o_set.find_by_order(1)) 
    << endl; 

  // Finding the number of elements 
  // strictly less than k=4 
  cout << o_set.order_of_key(4) 
    << endl; 

  // Finding the count of elements less 
  // than or equal to 4 i.e. strictly less 
  // than 5 if integers are present 
  cout << o_set.order_of_key(5) 
    << endl; 

  // Deleting 2 from the set if it exists 
  if (o_set.find(2) != o_set.end()) 
    o_set.erase(o_set.find(2)); 

  // Now after deleting 2 from the set 
  // Finding the second smallest element in the set 
  cout << *(o_set.find_by_order(1)) 
    << endl; 

  // Finding the number of 
  // elements strictly less than k=4 
  cout << o_set.order_of_key(4) 
    << endl; 

  return 0; 
} 
