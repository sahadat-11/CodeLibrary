//In The Name of AintAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, inf = 1e9 + 7;
int n, q; 
int a[N];
pair<int, int> t[4 * N];
pair<int, int> merge(pair<int, int> a, pair<int, int> b) {
	if(a.first > b.first) return a;
	if(b.first > a.first) return b;
	return make_pair(a.first, a.second + b.second);
}
void build(int node, int b, int e) {
	if(b == e) {
		t[node] = make_pair(a[b], 1);
		return;
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[node] = merge(t[l], t[r]);
}
pair<int, int> query(int node, int b, int e, int i, int j) {
	if(i > e or j < b) return {-inf, 0};
	if(b >= i and e <= j) {
		return t[node];
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void update(int node, int b, int e, int i, int x) {
	if(i > e or i < b) return;
	if(b == e and b == i) {
		t[node] = make_pair(x, 1);
		return;
	}
	int l = 2 * node;
	int r = 2 * node + 1;
	int mid = (b + e) / 2;
	update(l, b, mid, i, x);
	update(r, mid + 1, e, i, x);
	t[node] = merge(t[l], t[r]);
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
    		pair<int, int> ans = query(1, 1, n, i, j);
    		cout << ans.first << " " << ans.second << "\n";
    	}
    }
}

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9, inf = 1e9 + 9;
int a[N];
struct node {
  int mn, count;
};
node t[N * 4];
node merge(node l, node r) {
  node ans;
  ans.mn = max(l.mn, r.mn);
  ans.count = 0;
  if (l.mn == ans.mn) {
    ans.count += l.count;
  }
  if (r.mn == ans.mn) {
    ans.count += r.count;
  }
  return ans;
}
void build(int n, int b, int e) {
  if (b == e) {
    t[n].mn = a[b];
    t[n].count = 1;
    return;
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = merge(t[l], t[r]);
}

void upd(int n, int b, int e, int i, int v) {
  if (i < b or e < i) return;
  if (b == e) {
    t[n].mn = v;
    t[n].count = 1;
    return;
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  upd(l, b, mid, i, v);
  upd(r, mid + 1, e, i, v);
  t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j) {
  if (e < i or j < b) return {-inf, 0};
  if (b >= i and e <= j) {
    return t[n];
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  build(1, 1, n);
  while (q--) {
    int ty; cin >> ty;
    if (ty == 1) {
      int i, v; cin >> i >> v;
      ++i;
      upd(1, 1, n, i, v);
    }
    else {
      int l, r; cin >> l >> r;
      --r;
      ++l; ++r;
      node ans = query(1, 1, n, l, r);
      cout << ans.mn << ' ' << ans.count << '\n';
    }
  }
  return 0;
}