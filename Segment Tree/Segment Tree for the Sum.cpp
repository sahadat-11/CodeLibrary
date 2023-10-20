//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 7;
ll n, q; 
ll a[N];
ll t[4 * N];
void build(ll node, ll b, ll e) {
	if(b == e) {
		t[node] = a[b];
		return;
	}
	ll l = 2 * node;
	ll r = 2 * node + 1;
	ll mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[node] = t[l] + t[r];
}
ll query(ll node, ll b, ll e, ll i, ll j) {
	if(i > e or j < b) return 0;
	if(b >= i and e <= j) {
		return t[node];
	}
	ll l = 2 * node;
	ll r = 2 * node + 1;
	ll mid = (b + e) / 2;
	return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
void update(ll node, ll b, ll e, ll i, ll x) {
	if(i > e or i < b) return;
	if(b == e and b == i) {
		t[node] = x;
		return;
	}
	ll l = 2 * node;
	ll r = 2 * node + 1;
	ll mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	t[node] = t[l] + t[r];
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    while(q--) {
    	ll op; cin >> op;
    	if(op == 1) {
    		ll i, x; cin >> i >> x;
    		i++; // for 1 indexing
    		update(1, 1, n, i, x);
    	}
    	else {
    		ll i, j; cin >> i >> j;
    		j--; // i to (j - 1)
    		i++; j++;// for 1 indexing
    		ll ans = query(1, 1, n, i, j);
    		cout << ans << "\n";
    	}
    }
}