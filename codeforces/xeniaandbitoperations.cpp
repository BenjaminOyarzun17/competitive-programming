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


struct st{
	ll N ; vll tree;
	st(vll &a){
		N  = a.size();
		tree.resize(4*N);
		build(0, 0 , N-1, a);	
	}
	ll merge(ll a, ll b, ll p){
		p = (ll)log2(p);
		if(p&1){
			return a|b;
		}else return a^b;
	}
	void build(ll n, ll i , ll j, vll &a){
		if(i==j){

			tree[n]	= a[i];
			return ;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n]= merge(tree[2*n+1], tree[2*n+2],n );
	}
	ll query(ll n, ll i, ll j, ll l , ll r){
		if(i>=l && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return 0;
		}
		ll mid = (i+j)/2;
		return merge(query(2*n+1, i, mid, l , r), query(2*n+2, mid+1,j , l , r),n);

	}
	void update(ll n, ll i , ll j , ll t, ll val ){
		if(t>j || t< i)	{
			return ;
		}else if(i == j){
			tree[n]= val;
			return ;
		}
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, t, val)	;
		update(2*n+2, mid+1,j, t, val)	;
		tree[n]= merge(tree[2*n+1], tree[2*n+2],n);
	}
	void print(){ 
		for(auto x: tree) cout<<x<<' ';
		cout<<endl;	
	}
};





int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n , m;cin>>n>>m;
	vll a((ll)pow(2, n));
	for(auto &x: a) cin>>x;
	st s(a)	;
	while(m--){
		ll p, b;cin>>p>>b;
		p--;
		s.update(0, 0, a.size()-1, p, b);
		//s.print();
		cout<<s.query(0, 0 , a.size()-1, 0, a.size()-1)<<endl;
	}


	
	return 0;
}


