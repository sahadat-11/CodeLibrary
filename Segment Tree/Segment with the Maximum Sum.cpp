//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int n, q;
int a[N];
int pre[4 * N], suf[4 * N], psum[4 * N], t[4 * N];
void merge(int l, int r) {
	int p = l + r;
	pre[p] = max(t[l], t[l] + pre[r]);
	suf[p] = max(t[r], t[r] + suf[l]);
	psum[p] = max(psum[l], max(psum[r], psum[l] + psum[r]));
	t[p] = t[l] + t[r];
}
void build(int node, int b, int e) {
	if(b == e) {
		pre[node] = a[b];
		suf[node] = a[b];
		psum[node] = a[b];
		t[node] = a[b];
		return;
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	merge(l, r);
}
void update(int node, int b, int e, int i, int x) {
	if(i > e or i < b) return;
	if(i >= b and i >= e) {
	  t[i] = x;
	  return;	
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	merge(l, r);
}
// int query(int node, int b, int e, int i, int j) {
	// if(i > e or j < b) return 0;
	// if(b >= i and e <= j) {
		// return t[node];
	// }
	// int l = 2 * node;
	// int r = 2 * node + 1;
	// int mid = (b + e) / 2;
	// return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
// }
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    cout << t[1] << endl;
}