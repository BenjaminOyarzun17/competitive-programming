#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;


//version USACO

/*
los que son negativos son los root 
--> solo los roots apuntan a un numero negativo
los que son positivos son los children.
--> los children apuntan al indice del padre

unite
--> no olvidar el swap
--> al sumar el dsu[y] se esta aumentando el rank
--> al root que pierde su cualidad de root, se le asigna
el indice del nuevo root, para que se vuelva child
*/


struct DSU {
	vector<int> e;
	DSU(int N) { e = vector<int>(N, -1); }
	// get representive component (uses path compression)
	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
	//revisa si estan en el mismo conjunto
	bool same_set(int a, int b) { return get(a) == get(b); }
	int size(int x) { return -e[get(x)]; }
	bool unite(int x, int y) {  // union by size
		x = get(x), y = get(y);
		if (x == y) return false;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y]; e[y] = x;//conexion con nuevo parent
		return true;
	}
};







ll INF = 1e18;
ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


