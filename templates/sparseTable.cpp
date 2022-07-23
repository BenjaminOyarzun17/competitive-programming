#include <bits/stdc++.h>
using namespace std;

// verision cp algorithms
vvll build(vll &a, ll n, ll k+1){
	vvll st(n, vll (k+1));
	for (int i = 0; i < n; i++)
    	st[i][0] = array[i];
	for (int j = 1; j <= k; j++)
	//primero construye las de menor tamano. desde exponente igual 1 (pq exponente igual 0 ya esta hecho)
    		for (int i = 0; i + (1 << j) <= n; i++)
		//controla la longitud en base 2
        		st[i][j] = st[i][j-1] + st[i + (1 << (j - 1))][j - 1];
			// construye rango: [i, i+(2^(j-1))]
	return st;
	// formato st[i][j]: longitud desde i hasta i+2^j.
}

ll query(ll L , ll R, ll k){
	ll sum = 0;
	for (int j = k; j >= 0; j--) {
    		if ((1 << j) <= R - L + 1) {
        		sum += st[L][j];
        		L += 1 << j;
			//va moviendo el inicio del rango.
    		}
	}







// version errichto 




const int MAX_N = 100'005;
const int LOG = 17;
int a[MAX_N];
int m[MAX_N][LOG]; // m[i][j] is minimum among a[i..i+2^j-1]
int bin_log[MAX_N];

int query(int L, int R) { // O(1)
	int length = R - L + 1;
	int k = bin_log[length];
	return min(m[L][k], m[R-(1<<k)+1][k]);
}

int main() {
	// 1) read input
	int n;
	cin >> n;
	bin_log[1] = 0;
	for(int i = 2; i <= n; i++) {
		bin_log[i] = bin_log[i/2]+1;
	}
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		m[i][0] = a[i];
	}
	// 2) preprocessing, O(N*log(N))
	for(int k = 1; k < LOG; k++) {
		for(int i = 0; i + (1 << k) - 1 < n; i++) {
			m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
		}
	}
	// 3) answer queries
	int q;
	cin >> q;
	for(int i = 0; i < q; i++) {
		int L, R;
		cin >> L >> R;
		cout << query(L, R) << "\n";
	}
}

