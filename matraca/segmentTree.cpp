#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;




struct st{
	vll tree;
	ll N;
	st(vll &a){
		N = a.size();
		tree.resize(4*N);
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
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return neutr;	
		}ll mid = (i+j)	/2;
		return merge(query... , query...);
	}
	void update(ll t, ll val){
		return update(0, 0 , N-1, t, val);
	}
	void update(ll n, ll i , ll j, ll t, ll val){
		if(t>j|| t< i){
			return ;
		}else if(i==j){
			tree[n]= val;//update
			return ;
		}
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n] = merge(...);
	}
};


















struct st{
	ll N ;
	vll tree;
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
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j< l){
			return NEUTRO;
		}

		ll mid = (i+j)/2;
		return merge(q.. , q...);
	}

	void update(ll t, ll val){
		return update(0, 0 , N-1, t, val);
	}
	void update(ll n, ll i, ll j, ll t, ll val){
		if(t>j || t< i){
			return ;
		}else if(i==j){
			updateNde(tree[n], val);	
			return ;
		}

		ll mid = (i+j)/2;
		update(...);
		update(...);
		tree[n] = merge(...);
	}
};


















struct st{
	ll N;
	vll tree;
	st(vll &a){
		N  = a.size();
		tree.resize(4*N);
		build(0, 0, N-1, a);
	}
	void build( ll N, ll i, ll j, vll &a){
		if(i==j){
			tree[n]= a[i];return;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid , a);
		build(2*n+2, mid+1, j, a);
		tree[n]= merge(...);
	}
	ll query(ll l , ll r){
		return query(0, 0, N-1, l, r);
	}
	ll query(ll n , ll i, ll j, ll l , ll l){
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return neutro;
		}
		ll mid = (i+j)/2;
		return merge(...);
	}
	void update(ll t, ll val){
		return update(0, 0 , N-1, t, val)	;
	}
	void  update(ll n, ll l , ll r, ll t, ll val){
		if(t>r || t< l){
			return ;
		}else if(l == r){
			updateNode(tree[n], val);
			return ;
		}
		ll mid = (i+j)/2;	
		update(2*n+1, i, mid , t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n]= merge(..);
	}
};














struct st{
	ll N; vll tree;
	st(vll &a){
		N = a.size();
		tree.resize(4*N);
		build(0, 0, N-1, a);
	}
	void build(ll n, ll i, ll j, vll &a){
		if(i==j){tree[n]= a[i];
			return ;
		}
		ll mid = (i+j)	/2;
		build(2*n+1, i, mid, a)	;
		build(2*n+2, mid+1, j, a)	;
		tree[n]= merge(..);
	}
	ll query(ll l , ll r){
		return query(0, 0 , N-1, l , r);
	}
	ll query(ll n , ll i, ll j, ll r , ll l ){
		if(i>=l && j<=r){
			return tree[n];
		}else if(j<l || i>r)return NEUTRO;
		ll mid = (i+j)/2;
		return merge(query ... , query..)
	}
	void update(ll t, ll val){
		return update(0, 0, N-1, t, val);
	}
	void update(ll n, ll i, ll j, ll t ,ll val){
		if(t<i|| t> j ){
			return ;
		}else if(i==j){
			update(tree[t],val);
		}
		ll mid = (i+ j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n]  = merge(...);
	}
};










struct st{
	ll N;
 	vll tree;
	void st(vll &a){
		N = a.size();
		tree.resize(4*N);
		build(0, 0, N-1, a);
	}
	void build(ll n, ll i, ll j, vll &a){
		if(i==j){
			tree[i]= a[i];
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid ,a);
		build(2*n+2, mid+1, j ,a);
		tree[n]= merge(...);
	}
	ll query(ll l, ll r){
		return query(0, 0, N-1, l, r);
	}


	ll query(ll n, ll i, ll j, ll l, ll r){

		if(i>=l && j<=r){
			return tree[i] ;
		}else if(i>r || j< l){
			return NEUTRO;
		}
		ll mid = ( i+j)/2;
		

		return merge(query(2*n+1, i, mid, l ,r ), query(2*n+1, mid+1, r, l ,r ));
	}
	void update(ll t, ll val){

		update(0 , 0, N-1, t, val);
	}
	void update(ll n, ll i, ll j , ll t , ll val){
		
		if(j<t || i > t)return;
		if(i==j )tree[t]= val;//pq es un bs tree
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n]= merge(tree[2*n+1], tree[2*n+2]);
		
	}
	


};

struct st{
	ll N;vll tree;
	st(vll &a){
		N = a.size();
		tree.resize(4*N);
		build(0, 0, N-1, a);
	}
	void build(ll n, ll i, ll j, vll &a){
		if(i==j)tree[n] = a[i];
		ll mid = ( i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1,j, a);
		tree[n]= merge(...);
	}
	ll query(ll l , ll r){
		return query(0, 0, N-1, l , r);
	}
	ll query(ll n, ll i , ll j , ll l , ll r){
		if(i>=l && j<=r)		{
			return tree[n];
		}else if(i>r || j< l){
			return NEUTRO;
		}
		ll mid = (i+ j)/2;
		return merge(query(2*n+1, i, mid , l , r), query(2*n+2, mid +1, j , l , r));
	}

	void update(ll t, ll val){
		return update(n , 0, N-1, t, val);
	}
	void update( ll n, ll i , ll j, ll t, ll val ){
		if(i>t|| j< t)return;
		if(i==j)tree[n] = val;
		ll mid = (i+j)	/2;

		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n]= merge(...);
	
	}


};

struct st{
	ll N; vll tree;
	st(vll &a){
		N = a.size();
		tree.resize(4*N);
		build(0, 0 , N-1, a);
	}
	void build(n, i, j, vll &a){
		if(i==j){
			tree[n]= a[i];
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n]= merge(...);
	}
	ll query(ll l , ll r ){
		return query( n,  0,  N-1,  l ,  r);
	}
	ll query(ll n ,ll i , ll l , ll l , ll r ){
		if(i>= l  && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return NEUTR0;
		}
		ll mid = ( i+j)	/2;
		return merge(query(2*n+1, i, mid , l ,r), query(2*n+2, mid+1, j , l ,r));
	}
	void update(ll t, ll val){
		return update(0, 0 , N-1, t, val);
	}
	void update(ll n,ll i , ll j, ll t, ll val){
		if(i == j){
			tree[n]= val;
		}else if(i>t || j < t)return ;
		

		ll mid = (i+j)/2;
		update(2*n+1, i , mid, t, val)	;
		update(2*n+2, mid+1 , j, t, val);
		tree[n] = merge(...);
	}
	
}



























ll INF = 1e18;
ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


