#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

ll INF = 1e18;
ll mod = 1e9+7;


struct st{
	vs tree;
	ll N;
	st(vs &a){
		N= a.size();
		tree.resize(4*N);
		build(0, 0 , N-1, a);
	}
	void build(ll n, ll i, ll j, vs &a){
		if(i==j){
			tree[n] = a[i];	
			return ;
		}
		ll mid= (i+j)/2;
		build(2*n+1, i, mid, a);
		build(2*n+2, mid+1, j, a);
		tree[n] = tree[2*n+1]+ tree[2*n+2];
	}
	string query(ll l , ll r){
		return query(0, 0, N-1, l ,r);
	}
	string query(ll n, ll i , ll j, ll l , ll r){
		if(l<=i && j<=r){
			return tree[n];
		}else if(i>r || j<l){
			return "";
		}
		ll mid = (i+j)/2;
		return query(2*n+1, i, mid, l, r)+query(2*n+2, mid+1, j, l, r);
	}
	void update(ll t, string val){
		update(0, 0 , N-1, t, val);
	}
	void update(ll n, ll i, ll j, ll t,string val){
		if(i==j && i==t){
			/*
				OJO CON LA SEGUNDA CONDICION,
				en mi snippet  no aparecia, pero sin ella 
				me estaba tirando malo....
			*/
			tree[n] = val;
			return;
		}
		if(t<i || t>j){
			return;
		}
		ll mid= (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n] = tree[2*n+1]+ tree[2*n+2];
	}
};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	vs a;ll n, m;
	cin>>n>>m;
	for(int i = 0; i< n; i++){
		string ss; cin>>ss;
		a.pb(ss);
	}
	st tr(a);
	while(m--){
		string type;cin>>type;
		if(type=="update"){
			ll t;string val;
			cin>>t>>val;
			t--;
			tr.update(t, val);
		}else{
			ll l, r, k;cin>>l>>r>>k;
			l--; r--;
			string sol = tr.query(l, r);
			if(k>sol.size()){
				cout<<-1<<'\n';
			}else{
				cout<<sol[k-1]<<'\n';
			}
		}
	}
	return 0;
}


