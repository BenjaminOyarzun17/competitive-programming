#include<bits/stdc++.h>
using namespace std;

struct SegmentTree{
	ll N;
	vector <ll> tree;
	SegmentTree(vector <ll> A){
		N = A.size();
		tree.resize(4*N);
		build(0, 0, N-1, A);
	}
	
	void build(ll n, ll i, ll j, vector <ll> &A){
		if(i == j){
			tree[n] = A[i];
			return;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, A);
		build(2*n+2, mid+1, j, A);
		tree[n] = tree[2*n+1] + tree[2*n+2];
	}

	ll query(ll l, ll r){
		return query(0, 0, N-1, l, r);
	}

	ll query(ll n, ll i, ll j, ll l, ll r){
		if(l <= i && j <= r){
			return tree[n];
		}
		else if(j < l || r < i){
			return 0; // 0 es el neutro de nuestra operación (suma)
		}
		ll mid = (i+j)/2;
		return query(2*n+1, i, mid, l, r)
			+ query(2*n+2, mid+1, j, l, r);
	}

	void update(ll t, ll val){
		update(0, 0, N-1, t, val);
	}

	void update(ll n, ll i, ll j, ll t, ll val){
		if(t < i || j < t) return; // No contenido
		if(i == j){ // Caso hoja
			tree[n] = val;
			return;
		}
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n] = tree[2*n+1]+tree[2*n+2];
	}
};
int main(){



	return 0;
}
