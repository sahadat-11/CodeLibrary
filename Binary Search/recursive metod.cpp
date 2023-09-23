//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[], int key, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] == key)
      return mid;
    else if (a[mid] < key)
      return binary_search(a, key, mid + 1, high);
    else
      return binary_search(a, key, low, mid - 1);
  }
  return -1;
}
int main() {
  int a[] = {2,3, 4, 5,6,7, 8};
  int n = sizeof(a) / sizeof(a[0]);
  int key = 3;
  sort(a, a + n);
  int result = binary_search(a, key, 0, n - 1);
  if (result == -1)
    cout << "no found";
  else
    cout << "found = " << result;

  return 0;
}
