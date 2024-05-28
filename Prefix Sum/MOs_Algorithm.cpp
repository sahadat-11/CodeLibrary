//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e5 + 7;
int block, ans[N], a[N], sum;
struct Query{
    int index, L, R;
    bool operator < (const Query &other) const {
		int block_own = L / block;
		int block_other = other.L / block;
		if(block_own == block_other) {
           return R < other.R;
		}
		return block_own < block_other;
	}
}
query[N];
void add(int index){
    sum += a[index];
}
void remove(int index){
    sum -= a[index];
}
void solve() {
    int n; cin >> n;
    block = sqrtl(n) + 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        cin >> query[i].L >> query[i].R;
        query[i].index = i;
    }
    sort(query, query + q);
    int L = 0, R = -1;
	for (int i = 0; i < q; i++) {
	  while (R < query[i].R) add(++R);
	  while (L < query[i].L) remove(L++);
	  while (R > query[i].R) remove(R--);
	  while (L > query[i].L) add(--L);
	  ans[query[i].index] = sum;
	}
	for (int i = 0; i < q; i++) {
	  cout << ans[i] << "\n";
	}
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
// https://cp-algorithms.com/data_structures/sqrt_decomposition.html


// Program to compute sum of ranges for different range
// queries
#include <bits/stdc++.h>
using namespace std;

// Variable to represent block size. This is made global
// so compare() of sort can use it.
int block;

// Structure to represent a query range
struct Query
{
	int L, R;
};

// Function used to sort all queries so that all queries 
// of the same block are arranged together and within a block,
// queries are sorted in increasing order of R values.
bool compare(Query x, Query y)
{
	// Different blocks, sort by block.
	if (x.L/block != y.L/block)
		return x.L/block < y.L/block;

	// Same block, sort by R value
	return x.R < y.R;
}

// Prints sum of all query ranges. m is number of queries
// n is size of array a[].
void queryResults(int a[], int n, Query q[], int m)
{
	// Find block size
	block = (int)sqrt(n);

	// Sort all queries so that queries of same blocks
	// are arranged together.
	sort(q, q + m, compare);

	// Initialize current L, current R and current sum
	int currL = 0, currR = 0;
	int currSum = 0;

	// Traverse through all queries
	for (int i=0; i<m; i++)
	{
		// L and R values of current range
		int L = q[i].L, R = q[i].R;

		// Remove extra elements of previous range. For
		// example if previous range is [0, 3] and current
		// range is [2, 5], then a[0] and a[1] are subtracted
		while (currL < L)
		{
			currSum -= a[currL];
			currL++;
		}

		// Add Elements of current Range
		while (currL > L)
		{
			currSum += a[currL-1];
			currL--;
		}
		while (currR <= R)
		{
			currSum += a[currR];
			currR++;
		}

		// Remove elements of previous range. For example
		// when previous range is [0, 10] and current range
		// is [3, 8], then a[9] and a[10] are subtracted
		while (currR > R+1)
		{
			currSum -= a[currR-1];
			currR--;
		}

		// Print sum of current range
		cout << "Sum of [" << L << ", " << R
			<< "] is " << currSum << endl;
	}
}

// Driver program
int main()
{
	int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
	int n = sizeof(a)/sizeof(a[0]);
	Query q[] = {{0, 4}, {1, 3}, {2, 4}};
	int m = sizeof(q)/sizeof(q[0]);
	queryResults(a, n, q, m);
	return 0;
}


// https://www.geeksforgeeks.org/mos-algorithm-query-square-root-decomposition-set-1-introduction/