#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e9;

struct SegmentTree{
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


	vector <int> a = {3, 2, 3, 1, 4, 3, 5, 7};
	
	SegmentTree st(a);

	cout << st.query(1, 3) << '\n';

	st.update(3, 5, 4);

	cout << st.query(1, 3) << '\n';
	return 0;
}
