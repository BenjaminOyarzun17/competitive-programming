#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll ;
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
int main(){
	ll n , q; 
	cin>>n>>q;
	vll pesobolas(n, 0);
	vll ibolas(n);
	vll queries(q);
	
	SegmentTree st();
	ll m = 10e18, M = -10e18;
	ll mq = 10e18, Mq = -10e18;
	for(auto &x: ibolas){
		cin>>x;
	}
	vll nieve()
	while(q--){
		ll w;cin>>w;
		if(w>0){

		}else{


		}
	}


	return 0;
}
