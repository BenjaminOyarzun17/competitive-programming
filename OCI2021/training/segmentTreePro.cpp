#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Nodo{
	ll res; // respuesta al intervalo
	ll suf; // sufijo de suma maxima
	ll pref; // prefijo de suma maxima
	ll sum; // suma del intervalo entero
};

template <class T>
struct SegmentTree{
	int N;
	vector <T> tree;
	SegmentTree(vector <T> A){
		N = A.size();
		tree.resize(4*N);
		build(0, 0, N-1, A);
	}

	T merge(T a, T b){ // !
		Nodo c;
		c.res = max({a.res, b.res, a.suf+b.pref});
		c.pref = max(a.pref, a.sum+b.pref);
		c.suf = max(b.suf, b.sum+a.suf);
		c.sum = a.sum+b.sum;
		return c;
	}

	void build(int n, int i, int j, vector <T> &A){
		if(i == j){
			tree[n] = A[i];
			return;
		}
		int mid = (i+j)/2;
		build(2*n+1, i, mid, A);
		build(2*n+2, mid+1, j, A);
		tree[n] = merge(tree[2*n+1], tree[2*n+2]);
	}

	T query(int l, int r){
		return query(0, 0, N-1, l, r);
	}

	T query(int n, int i, int j, int l, int r){
		if(l <= i && j <= r) return tree[n];
		int mid = (i+j)/2;
		if(mid < l || r < i)
			return query(2*n+2, mid+1, j, l, r);
		if(j < l || r < mid+1)
			return query(2*n+1, i, mid, l, r);
		return merge(
				query(2*n+1, i, mid, l, r),
				query(2*n+2, mid+1, j, l, r));
	}

	void update(int t, T val){
		update(0, 0, N-1, t, val);
	}

	void update(int n, int i, int j, int t, T val){
		if(t < i || j < t) return;
		if(i == j){
			tree[n] = val;
			return;
		}
		int mid = (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n] = merge(tree[2*n+1], tree[2*n+2]);
	}
};


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector <Nodo> a(n);
	for(int i=0; i<n; i++){
		ll x;
		cin >> x;
		a[i] = {x, x, x, x};
	}
	SegmentTree <Nodo> st(a);
	for(int i=0; i<m; i++){
		int idx;
		ll val;
		cin >> idx >> val;
		st.update(idx-1, {val,val,val,val});
		
		Nodo raiz = st.query(0, n-1);
		cout << max(0LL, raiz.res) << '\n';
	}
	return 0;
}

