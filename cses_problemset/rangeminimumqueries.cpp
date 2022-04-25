#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

struct SegmentTree{
	ll N;
	vector <ll> tree;
	SegmentTree(vector <ll> A){
		// constructor del segment tree
		// construye el segment tree llamando a build
		// a partir de un vector A
		N = A.size();
		tree.resize(4*N);
		build(0, 0, N-1, A);
	}
	
	void build(ll n, ll i, ll j, vector <ll> &A){
		// build construye un nodo del árbol en O(N)
		// n: índice del nodo en el vector tree
		// [i,j] es el llervalo o segmento que mira el nodo
		// A es el vector de input
		if(i == j){
			tree[n] = A[i];
			return;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, A);
		build(2*n+2, mid+1, j, A);
		tree[n] = min(tree[2*n+1], tree[2*n+2]);
	}

	ll query(ll l, ll r){
		// llermediario (function overload)
		return query(0, 0, N-1, l, r);
	}

	ll query(ll n, ll i, ll j, ll l, ll r){
		// responde una query en O(log N)
		// n: índice del nodo en el vector tree
		// [i,j] es el llervalo o segmento que mira el nodo
		// [l,r] es el llervalo por el que nos preguntan
		if(l <= i && j <= r){
			// Caso contenido completamente
			return tree[n];
		}
		else if(j < l || r < i){
			// Caso no está contenido ([i,j] y [l,r] no llersectan)
			return 10e17; // 0 es el neutro de nuestra operación (suma)
		}
		// Caso contenido parcialmente:
		ll mid = (i+j)/2;
		return min(query(2*n+1, i, mid, l, r), query(2*n+2, mid+1, j, l, r));
	}

	void update(ll t, ll val){
		// actualizar la posición t a un valor val
		update(0, 0, N-1, t, val);
	}

	void update(ll n, ll i, ll j, ll t, ll val){
		// Actualiza en O(log N)
		// n: indice del nodo en tree
		// [i,j] llervalo que mira el nodo
		// t: indice del arreglo original que queremos modificar
		// val: valor que le queremos poner
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
	ll n, q;cin>>n>>q;
	vector<ll> nums(n); 
	for(auto &x: nums) cin>>x;
	
	
	SegmentTree st(nums);
	while(q--){
		ll l,r;cin>>l>>r;
		l--; r--;
		ll res = st.query(l,r );
		cout<<res<<endl;
	}
	
	return 0;
}

