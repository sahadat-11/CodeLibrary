// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum
// Manhattan distance
void MaxDist(vector<pair<int, int> >& A, int N)
{
	// Vectors to store maximum and
	// minimum of all the four forms
	vector<int> V(N), V1(N);

	for (int i = 0; i < N; i++) {
		V[i] = A[i].first + A[i].second;
		V1[i] = A[i].first - A[i].second;
	}

	// Sorting both the vectors
	sort(V.begin(), V.end());
	sort(V1.begin(), V1.end());

	int maximum
		= max(V.back() - V.front(), V1.back() - V1.front());

	cout << maximum << endl;
}

// Driver Code
int main()
{
	int N = 3;

	// Given Co-ordinates
	vector<pair<int, int> > A
		= { { 1, 2 }, { 2, 3 }, { 3, 4 } };

	// Function Call
	MaxDist(A, N);

	return 0;
}

// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum
// Manhattan distance
void MaxDist(vector<pair<int, int> >& A, int N)
{
	// Variables to track running extrema
	int minsum, maxsum, mindiff, maxdiff;

	minsum = maxsum = A[0].first + A[0].second;
	mindiff = maxdiff = A[0].first - A[0].second;
	for (int i = 1; i < N; i++) {
		int sum = A[i].first + A[i].second;
		int diff = A[i].first - A[i].second;
		if (sum < minsum)
			minsum = sum;
		else if (sum > maxsum)
			maxsum = sum;
		if (diff < mindiff)
			mindiff = diff;
		else if (diff > maxdiff)
			maxdiff = diff;
	}

	int maximum = max(maxsum - minsum, maxdiff - mindiff);

	cout << maximum << endl;
}

// Driver Code
int main()
{
	int N = 3;

	// Given Co-ordinates
	vector<pair<int, int> > A
		= { { 1, 2 }, { 2, 3 }, { 3, 4 } };

	// Function Call
	MaxDist(A, N);

	return 0;
}
