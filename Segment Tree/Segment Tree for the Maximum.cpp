//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, inf = 1e9 + 7;
int n, q; 
int a[N];
int t[4 * N];
void build(int node, int b, int e) {
	if(b == e) {
		t[node] = a[b];
		return;
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[node] = max(t[l], t[r]);
}
int query(int node, int b, int e, int i, int j) {
	if(i > e or j < b) return -inf;
	if(b >= i and e <= j) {
		return t[node];
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void update(int node, int b, int e, int i, int x) {
	if(i > e or i < b) return;
	if(b == e and b == i) {
		t[node] = x;
		return;
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	t[node] = max(t[l], t[r]);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    while(q--) {
    	int op; cin >> op;
    	if(op == 1) {
    		int i, x; cin >> i >> x;
    		i++; // for 1 indexing
    		update(1, 1, n, i, x);
    	}
    	else {
    		int i, j; cin >> i >> j;
    		j--; // i to (j - 1)
    		i++; j++;// for 1 indexing
    		int ans = query(1, 1, n, i, j);
    		cout << ans << "\n";
    	}
    }
}