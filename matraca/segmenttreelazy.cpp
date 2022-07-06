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
struct stlazy{
	vll tree;
	vll lazy;
	ll N;
	st(vll &a){
		N = a.size();	
		tree.resize(4*N);
		lazy.resize(4*N);
		build(0, 0 , N-1, a);
	}
	void build(ll n, ll i , ll j, vll &a){
		if(i == j){
			tree[n] = a[i];
			return ;
		}
		ll mid = (i+j)	/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n] = merge(..., ...);
	}
	ll query(ll l , ll r){
		return query(0 , 0 , N-1, l , r, a);
	}
	ll query(ll n, ll i, ll j, ll l , ll r, vll &a){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				updateLazy(lazy[2*n+1 ], ...);
				updateLazy(lazy[2*n+2 ], ...);
			}
			lazy[n] = NEUTROLAZY;
		}
		if(l<=i && j<=r){
			return tree[n];
		}else if(i> r && j< l ){
			return NEUTRO;
		}
		ll mid = (i+j)/2;
		return merge(..., ...);
	}
	void update(ll l ,ll  r, ll val){
		update(0 , 0 , N-1, l, r, val);
	}
	
	void update(ll n, ll i , ll j ,ll l , ll r, ll val ){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				updateLazy(lazy[2*n+1 ], ...);
				updateLazy(lazy[2*n+2 ], ...);
			}
			lazy[n] = NEUTROLAZY;
		}
		if(i> r || j< l){
			return ;
		}else if(i >= l && j<=r){
			updateNode(lazy[n], val);
			if(i!=j){

				updateLazy(lazy[2*n+1 ], ...);
				updateLazy(lazy[2*n+2 ], ...);
			}
			return ;
		}
		ll mid = (i+j)/2;
		update(2*n+1, 0, N-1, l, r, val);
		update(2*n+2, 0, N-1, l , r, val);
		tree[n] = merge(..., ...);
		return ;
	}
};

struct st{
	vll tree,lazy;
	ll N;
	st(vll &a){
		N = a.size();
		tree.resize(4*N);
		lazy.resize(4*N);
		build(0, 0 , N-1, a);
	}
	void build(ll n, ll i, ll j, vll &a){
		if (i==j){
			tree[n] = a[i];
		}
		ll  mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1,j, a);
		tree[n]= merge(.., ...);
	}
	ll query(ll l , ll r){
		return query(0, 0 , N-1, l , r);
	}
	ll query(ll n, ll i, ll j, ll l ,ll r ){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				updateLazy(2*n+1, lazy[n]);
				updateLazy(2*n+2, lazy[n]);
			}
			updateLazy(n, neutralLazy);
		}
		if(l<=i && j<=r){
			return tree[n];
		}else if(i> r|| j< l)return neutro;
		ll mid = (i+j)/2;
		return merge(..., ...);
	}
	void update(ll l ,ll r ll val){
		update(0, 0 , N-1, l , r, val);
	}
	void update(ll n, ll i , ll j , ll l, ll r, ll val){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				updateLazy(2*n+1, lazy[n]);
				updateLazy(2*n+2, lazy[n]);
			}
			updateLazy(n, neutralLazy);
		}
		if(i> r || j< l){
			return ;
		}else if(l<= i && j<= l){
			updateNode(n, val);
			if(i!=j){
				updateLazy(2*n+1,val); 
				updateLazy(2*n+2, val);
			}
			return ;
		}
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, l , r, val)
		update(2*n+2, mid+1, j, l , r, val);
		tree[n] = merge(.., ...);
	}
};


struct stlazy{
	vll tree;
	vll lazy;
	ll N;
	st(vll &a){
		N = a.size();
		tree.resize(4*N);
		lazy.resize(4*N);
		build(0, 0 , N-1, a);	
	}
	void build(ll n, ll i, ll j , vll &a){
		if(i==j){
			tree[n]=  a[i];
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid +1, j, a);
		tree[n] = merge(..);
	}
	ll query(ll l , ll r){
		return query(0, 0 , N-1, l , r);
	}
	ll query(ll n, ll i , ll j, ll l , ll r ){
		if(lazy[n]!=0){
			updateTree(tree[n], lazy[n])	;
			if(i!=j){
				updateL(lazy[2*n+1], lazy[n]);
				updateL(lazy[2*n+2], lazy[n]);
			}
			lazy[n]= neutro;
		}
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return neutr;	
		}ll mid = (i+j)	/2;
		return merge(query... , query...);
	}
	void update(ll l , ll r, ll val){
		return update(0, 0 , N-1, l, r, val);
	}
	void update(ll n, ll i , ll j, ll l , ll r, ll val){

		if(lazy[n]!=0){
			updateTree(tree[n], lazy[n])	;
			if(i!=j){
				updateL(lazy[2*n+1], lazy[n]);
				updateL(lazy[2*n+2], lazy[n]);
			}
			lazy[n]= neutro;
		}
		if(i> r || j< l){
			return ;
		}else if(l<=i && j<=r){
			updateNode(tree[n], val);
			if(i!=j){

				updateL(lazy[2*n+1], lazy[n]);
				updateL(lazy[2*n+2], lazy[n]);
			}
				
			return ;

		}
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, l, r, val);
		update(2*n+2, mid+1, j, l, r, val);
		tree[n] = merge(...);
	}
};

struct stlaz{
	ll N ;
	vll tree;
	vll lazy;
	st(vll &a){
		N = a.size();
		tree.resize(4*N);
		build(0	, 0, N-1, a);
	}

	void build(ll n, ll i, ll j, vll &a){
		if(i==j){
			tree[n]=a[i];
			return;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n]= merge(...);
	}
	ll query(ll l , ll r){
		return query(0, 0 , N-1, l , r);
	}
	ll query(ll n, ll i , ll j, ll l , ll r){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				updateLazy(2*n+1, val);
				updateLazy(2*n+2, val);
			}
			lazy[n]= NEUTROLAZY;
		}
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j< l){
			return NEUTRO;
		}

		ll mid = (i+j)/2;
		return merge(q.. , q...);
	}

	void update(ll l , ll r, ll val){
		return update(0, 0 , N-1, l , r , val);
	}
	void update(ll n, ll i, ll j, ll l , ll r, ll val ){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				updateLazy(2*n+1, val);
				updateLazy(2*n+2, val);
			}
			lazy[n]= NEUTROLAZY;
		}
		if(l<= i && j<=r){
			updateNode(tree[n] , val);
			if(i!=j){
				updateLazy(2*n+1, val);
				updateLazy(2*n+2, val);
			}
			return ;
		}else if(i> r|| j< l)return ;


		ll mid = (i+j)/2;
		update(...);
		update(...);
		tree[n] = merge(...);
	}
};


struct stlaz{
	ll N;
	vll tree, lazy;
	stlaz(vll &a){
		N = a.size();
		tree.resize(4*N);
		lazy.resize(4*N);
		build(0, 0 , N-1, a);
	}
	void build(ll n, ll i, ll j, vll &a){
		if(i== j){
			tree[n] = a[i];return ;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1 , j, a);
		tree[n]= merge( ..);
	}
	ll query(ll l, ll r){
		return query(0, 0, N-1,l, r);
	}
	ll query(ll n, ll i , ll j, ll l ,ll r){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n] );
			if(i!=j){
				updateLazy(lazy[2*n+1], lazy[n]);
				updateLazy(lazy[2*n+2], lazy[n]);
			}
			lazy[n]= neutro;
		}
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return ;
		}
		ll mid = (i+j)/2;
		return merge(quer..., query...);
	}
	void update(ll l , ll r, ll val){
		return update(0 , 0 , N-1, l , r, val);
	}
	void update(ll n, ll i , ll j, ll l , ll r, ll val){

		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n] );
			if(i!=j){
				updateLazy(lazy[2*n+1], lazy[n]);
				updateLazy(lazy[2*n+2], lazy[n]);
			}
			lazy[n]= neutro;
		}
		if(l<=i && j<=r){
			updateNode(tree[n], val);
			if(i!=j){
				updateLazy(lazy[2*n+1], val);
				updateLazy(lazy[2*n+2], val);
			}
			return ;
		}else if(i>r || j< l)return;
		ll mid= (i+j)/2;
		update(..);
		update(..);
		tree[n]= merge(tree.. , tree ...);
	}
};










struct segtl{
	ll N; 
	vll tree, lazy;
	segtl(vll &a){
		N = a.size();
		tree.resize(4*N);
		lazy.resize(4*N);
		build(0, 0, N-1, a);
	}
	void build(ll n, ll i, ll j, vll&a){
		if(i==j){tree[n]= a[i] ;return;}//!!!!!!!!
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n]= merge(..);
	}
	ll query(ll l, ll r){
		return query(0, 0, N-1, l , r);
	}

	ll query( ll n, ll i, ll j, ll l , ll r){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				lazy[2*n+1]= ...lazy[n];
				lazy[2*n+2]= ...lazy[n];
			}
			lazy[n]= neutro;
		}
		if(l<=i && r>=j){
			return tree[n];
		}else if(i>r || j< l)return neutro;
		ll mid = (i+j)	/2;
		return merge(query ...query..);
	}
	void update(ll l , ll r, ll val){
		update(0, 0 , N-1, l , r, val);
	}
	void update(ll n, ll i, ll j, ll l , ll r, ll val){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				lazy[2*n+1]= ...lazy[n];
				lazy[2*n+2]= ...lazy[n];
			}
			lazy[n]= neutro;
		}
		if(r<=i && l >=j){
			update(tree[n],val);
			if(i!=j){
				updateL(lazy[2*n+1], val);
				updateL(lazy[2*n+2], val);

			}
			return;
		}else if(i> l || j< r) return; 
		ll mid = (i+j)/2;
		update(...);
		update(...);
		tree[n] = merge(...);
	
	}
};



struct stl{
	ll N;
	vll tree, lazy;
	stl(vll &a){
		N = a.size();
		tree.resize(4*N);
		lazy.resize(4*N);
		build(0, 0 , N-1, a)	;
	}
	void build(ll n ,ll i , ll j, vll &a){
		if(i==j)tree[n]=a[i];
		ll m = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n] = merge(...);
	}
	ll query(ll l , ll r ){
		return query(0 , 0 , N-1, l ,r);
	}

	ll query(ll n, ll i, ll j, ll l , ll r){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				lazy[2*n+1]= lazy[n];
				lazy[2*n+2]= lazy[n];
			}
			lazy[n]= NEUTRO;
		}
		if(i>=l && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return NEUTRO;
		}
		ll mid = (i+j)/2;
		return merge(query(...), query(...));
	}
	void update(ll l , ll r, ll val){
		return update(0, 0, N-1, l , r , val);
	}
	void update(ll n, ll i , ll j, ll l , ll r, ll val){
		if(lazy[n]!=0){
			updateNode(tree[n], lazy[n]);
			if(i!=j){
				lazy[2*n+1]= lazy[n];
				lazy[2*n+2]= lazy[n];
			}
			lazy[n]	= NEUTRO;
		}
		if(i>=l && j<=r){
			updateNode(tree[n], val);
			if(i!=j){
				updateNode(tree[2*n+1], val);
				updateNode(tree[2*n+2], val);
			}
			return ;
		}
		ll mid = (i+j)/2;
		update(...);
		update(..);
		tree[n]= merge(...);
		
	}
}












int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);







	return 0;
}


