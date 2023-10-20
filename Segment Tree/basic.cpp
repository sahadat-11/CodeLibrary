//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int a[N];
int t[4 * N];
void build(int node, int b, int e) {
	if(b == e) {
		t[node] = a[b];
		return;
	}
	int l = 2 * node, r = 2 * node + 1;
	int mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[node] = t[l] + t[r];
}
int query(int node, int b, int e, int i, int j) { //(i, j) = range
	if(b > j or e < i) return 0; // totally out
	if(b >= i and e <= j) {// totally in
		return t[node];
	}
	int l = 2 * node, r = 2 * node + 1;
	int mid = (b + e) / 2;
	return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
void update(int node, int b, int e, int i, int x) {
	if(b > i or e < i) return;
	if(b >= i and e <= i) {
		t[node] = x;
		return;
	}
	int l = 2 * node, r = 2 * node + 1;
	int mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	t[node] = t[l] + t[r];
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    // 1 2 3 4 5
    build(1, 1, n);
    cout << t[1] << endl;
    cout << query(1, 1, n, 2, 4) << endl;
    update(1, 1, n, 3, 10);
    //1 2 10 4 5
    cout << query(1, 1, n, 2, 4) << endl;
    return 0;
}
// http://www.shafaetsplanet.com/?p=1557
