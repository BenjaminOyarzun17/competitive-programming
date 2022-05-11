#include<bits/stdc++.h>

using namespace std;





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
		tree[n] = max(tree[2*n+1],  tree[2*n+2]);
	}

	ll query(ll tourists){
		// llermediario (function overload)
		return query(0, 0, N-1, tourists);
	}

	ll query(ll n,ll l, ll r, tourists){
		// responde una query en O(log N)
		// n: índice del nodo en el vector tree
		// [i,j] es el llervalo o segmento que mira el nodo
		// [l,r] es el llervalo por el que nos preguntan
		if (tree[n]< tourists) return -1;
		if(l <= i && j <= r && tree[n]>=tourists){
			// Caso contenido completamente

			/*

				para problema de hotel rooms me falta
				que aqui se llame la funcion update. tengo 
				que definir bien como actualizare los valores
			*/

			return tree[n];
		}
		else if(j < l || r < i){
			// Caso no está contenido ([i,j] y [l,r] no llersectan)
			return -1; // 0 es el neutro de nuestra operación (suma)
		}
		// Caso contenido parcialmente:
		ll mid = (i+j)/2;
		return max(query(2*n+1, i, mid, l, r)
			, query(2*n+2, mid+1, j, l, r));
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
		tree[n] = min(tree[2*n+1],tree[2*n+2]);
	}
};





int main(){
	

	return 0;
}
