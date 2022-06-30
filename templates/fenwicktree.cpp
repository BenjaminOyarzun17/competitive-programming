
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



//version usaco usando la idea de bits 
//este video explica bien su funcionamiento: https://youtu.be/uSFzHCZ4E-8

int n, q;


vector<ll> bit(MX), x(MX);
//bit = binary indexed tree = fenwick tree
void upd(int i, ll v) {
	//voy agregando el bit menos significativo; subo en el arbol
	//recordar que el bit tiene N nodos (si x.size() = N)
	for ( i ; i<=n; i+=i&(-i)) bit[i]+=v;
}

/*
ejemplo para query(7):
7=00111
--> ans+= bit[00111]
--> ans+= bit[00110]
--> ans+= bit[00100]
--> ans+= bit[00000]
break;

por esto se binary indexed tree! literalmente los indices 
hacen mas sentido en binario!
*/
ll qry(int i) {
	ll sum = 0;
	//voy eliminando el bit menos significativo; bajo en el arbol. termina cuando es 0000.
	for(i ; i>0; i-=i&(-i)) sum += bit[i];
	return sum;
}
int main() {

	cin >> n >> q;

	for(int i=1; i<=n; i++) {
		cin >> x[i];
		upd(i, x[i]);//construyo el arbol

	}

	for(int i=1; i<=q; i++) {

		int t,a,b; cin >> t >> a >> b;

		if (t==1) {
			upd(a, -x[a]); // remove its current value
			x[a]=b; upd(a, x[a]); // add its new value

		} else {

			cout << qry(b)-qry(a-1) << "\n";

		}

	}

}



struct FenwickTreeOneBasedIndexing {//version C-P Algorithms
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTreeOneBasedIndexing(int n) {
        this->n = n + 1;
        bit.assign(n + 1, 0);
    }

    FenwickTreeOneBasedIndexing(vector<int> a)
        : FenwickTreeOneBasedIndexing(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int sum(int idx) {
        int ret = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            ret += bit[idx];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (++idx; idx < n; idx += idx & -idx)
            bit[idx] += delta;
    }
};
