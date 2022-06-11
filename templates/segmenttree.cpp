#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

ll INF = 1e18;
ll mod = 1e9+7;




/*
segment Tree: 

version mas vanilla posible, sin merge. 

segment tree advanced: 

introduce segment tree sobre nodos que tienen bastante informacion y que implementa merge

segment tree lazy: 

lazy segment tree





*/










struct SegmentTree{
	int N;
	vector <int> tree;
	SegmentTree(vector <int> A){
		// constructor del segment tree
		// construye el segment tree llamando a build
		// a partir de un vector A
		N = A.size();
		tree.resize(4*N);
		build(0, 0, N-1, A);
	}
	
	void build(int n, int i, int j, vector <int> &A){
		// build construye un nodo del árbol en O(N)
		// n: índice del nodo en el vector tree
		// [i,j] es el intervalo o segmento que mira el nodo
		// A es el vector de input
		if(i == j){
			tree[n] = A[i];
			return;
		}
		int mid = (i+j)/2;
		build(2*n+1, i, mid, A);
		build(2*n+2, mid+1, j, A);
		tree[n] = tree[2*n+1] + tree[2*n+2];
	}

	int query(int l, int r){
		// intermediario (function overload)
		return query(0, 0, N-1, l, r);
	}

	int query(int n, int i, int j, int l, int r){
		// responde una query en O(log N)
		// n: índice del nodo en el vector tree
		// [i,j] es el intervalo o segmento que mira el nodo
		// [l,r] es el intervalo por el que nos preguntan
		if(l <= i && j <= r){
			// Caso contenido completamente
			return tree[n];
		}
		else if(j < l || r < i){
			// Caso no está contenido ([i,j] y [l,r] no intersectan)
			return 0; // 0 es el neutro de nuestra operación (suma)
		}
		// Caso contenido parcialmente:
		int mid = (i+j)/2;
		return query(2*n+1, i, mid, l, r)
			+ query(2*n+2, mid+1, j, l, r);
	}

	void update(int t, int val){
		// actualizar la posición t a un valor val
		update(0, 0, N-1, t, val);
	}
	void update(int n, int i, int j, int t, int val){
		// Actualiza en O(log N)
		// n: indice del nodo en tree
		// [i,j] intervalo que mira el nodo
		// t: indice del arreglo original que queremos modificar
		// val: valor que le queremos poner
		if(t < i || j < t) return; // No contenido
		if(i == j){ // Caso hoja
			tree[n] = val;
			return;
		}
		int mid = (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n] = tree[2*n+1]+tree[2*n+2];
	}
};
struct Nodo{
	ll res; // respuesta al intervalo
	ll suf; // sufijo de suma maxima
	ll pref; // prefijo de suma maxima
	ll sum; // suma del intervalo entero
};

template <class T>
struct SegmentTreeAdvanced{
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
struct SegmentTreeLazy{
	int N;
	vector <int> tree, lazy;
	SegmentTree(vector <int> A){
		// constructor del segment tree
		// construye el segment tree llamando a build
		// a partir de un vector A
		N = A.size();
		tree.resize(4*N);
		lazy.assign(4*N, 0);
		build(0, 0, N-1, A);
	}
	
	void build(int n, int i, int j, vector <int> &A){
		// build construye un nodo del árbol en O(N)
		// n: índice del nodo en el vector tree
		// [i,j] es el intervalo o segmento que mira el nodo
		// A es el vector de input
		if(i == j){
			tree[n] = A[i];
			return;
		}
		int mid = (i+j)/2;
		build(2*n+1, i, mid, A);
		build(2*n+2, mid+1, j, A);
		tree[n] = min(tree[2*n+1],tree[2*n+2]);
	}

	int query(int l, int r){
		// intermediario (function overload)
		return query(0, 0, N-1, l, r);
	}

	int query(int n, int i, int j, int l, int r){
		// si lazy != 0, hay una actualizacion pendiente
		if(lazy[n] != 0) {
			tree[n] += lazy[n];

			// si i != j, no es un nodo hoja
			if(i != j) {
				lazy[2*n+1] += lazy[n];
				lazy[2*n+2] += lazy[n];
			}

			// reseteamos pues ya hicimos la actualización pendiente
			lazy[n] = 0;
		}

		// responde una query en O(log N)
		// n: índice del nodo en el vector tree
		// [i,j] es el intervalo o segmento que mira el nodo
		// [l,r] es el intervalo por el que nos preguntan
		if(l <= i && j <= r){
			// Caso contenido completamente
			return tree[n];
		}
		else if(j < l || r < i){
			// Caso no está contenido ([i,j] y [l,r] no intersectan)
			return INF; // 0 es el neutro de nuestra operación (suma)
		}
		// Caso contenido parcialmente:
		int mid = (i+j)/2;
		return min(query(2*n+1, i, mid, l, r)
			,query(2*n+2, mid+1, j, l, r));
	}

	void update(int l, int r, int val){
		// actualizar el rango [l .. r] con valor +val
		update(0, 0, N-1, l, r, val);
	}

	void update(int n, int i, int j, int l, int r, int val){
		// si lazy != 0, hay una actualizacion pendiente
		if(lazy[n] != 0) {
			tree[n] += lazy[n];

			// si i != j, no es un nodo hoja
			if(i != j) {
				lazy[2*n+1] += lazy[n];
				lazy[2*n+2] += lazy[n];
			}

			// reseteamos pues ya hicimos la actualización pendiente
			lazy[n] = 0;
		}

		if(l <= i && j <= r){
			// Caso contenido completamente
			tree[n] += val;

			// si i != j, no es un nodo hoja
			if(i != j) {
				lazy[2*n+1] += val;
				lazy[2*n+2] += val;
			}

			return;
		}
		else if(j < l || r < i){
			// Caso no está contenido ([i,j] y [l,r] no intersectan)
			return; 
		}

		// Caso contenido parcialmente:
		int mid = (i+j)/2;
		update(2*n+1, i, mid, l, r, val);
		update(2*n+2, mid+1, j, l, r, val);
		tree[n] = min(tree[2*n+1], tree[2*n+2]);
	}
};
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}

