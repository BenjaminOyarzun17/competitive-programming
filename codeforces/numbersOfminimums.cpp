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


struct mn{
ll 	v;
ll	f;	
};


struct st{
	vector<mn> tree; ll N;
	st(vll &a){
		N  = a.size();
		tree.resize(4*N);
		build(0, 0 , N-1, a);
	}
	mn merge(mn a, mn b){
		mn n;
		if(a.v== b.v){
			n.v = a.v;
			n.f = a.f+ b.f;
			return n;
		}else if(a.v<b.v){
			return a;
		}else return b;
	}
	void build(ll n, ll i , ll j, vll &a){
		if(i==j ){
			mn d;
			d.v= a[i];
			d.f= 1;
			tree[n] = d;
			return ;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n] = merge(tree[2*n+1], tree[2*n+2]);
	}
	mn query(ll l , ll r){
		return query(0, 0 , N-1, l, r);
	}
	mn query(ll n, ll i, ll j, ll l ,ll r){
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j< l){
			mn neu;
			neu.v = INF;
			neu.f= 0;
			return neu;
		}
		ll mid = (i+j)/2;
		return merge(query(2*n+1, i, mid, l, r), query(2*n+2, mid+1, j, l, r));
	}
	void update(ll t, ll val){
		update(0, 0 ,N-1, t, val);
	}
	void update(ll n, ll i, ll j, ll t, ll val){
		if(i==j && i==t){
			mn d;
			d.v =val;
			d.f=1;
			tree[n] = d;
			return ;
		}else if(t< i || t> j){
			return ;
		}
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n] = merge(tree[2*n+1], tree[2*n+2]);
	}
	void d(){
		cout<<"s---"<<endl;
		for(auto x: tree) cout<<x.v<< ' '<<x.f<<endl;;
		cout<<"---e"<<endl;
	}
};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);


	ll n, m; cin>>n>>m;
	vll a;	
	for(int i = 0 ; i< n; i++){
		ll g; cin>>g;
		a.pb(g);
	}
	st t(a);
	while(m--){
	ll f;	cin>>f;
		if(f==1){
			ll up, val;	
			
			cin>>up>>val;
			a[up]= val;
			t.update(up, val);
		}else{
			ll l , r;		

			cin>>l>>r;

			r--;
			mn res= t.query(l , r);
			cout<<res.v<< ' '<<res.f<<endl;
		}
	}




	return 0;

}


