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


vector<ll> BFS(ll N,ll o, vvll &adj, ll MD){
	vll dt(N, -1);
	vector<ll> regable;
	regable.pb(o);//origen
	dt[o] = 0;	
	queue<ll> q;
	q.push(o);
	while(!q.empty()){
		ll u = q.front();q.pop();
		for(auto x: adj[u]){
			if(dt[x]==-1 && dt[u]<MD){//revisar la inclusion
				q.push(x);
				dt[x] = dt[u]+1;
				regable.pb(x);
			}
		}


	}	
	return regable;
}



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);


	ll N, L, q ; cin>>N>>L;
	vvll adj(N, vector<ll>());
	for(int i = 0 ; i< N-1 ; i++){
		ll a, b;cin>>a>>b;
	 	a--; b--; adj[a].pb(b);
		//cout<<a<< ' '<<b<<endl;
		adj[b].pb(a);
	}
	vll H;

	for(int i = 0 ; i< N ; i++){
		ll h; cin>>h;
		H.pb(h);
	}

	//for(auto &x: H) cout<<x<<endl;
	cin>>q;

	while(q--){
		ll T ; cin>>T;
		if(T==1){
			//cout<<"Accion1"<<endl;
			
			ll xk, dk, wk; cin>>xk>> dk>> wk;
			xk--;
			//cout<<xk<<' '<<dk<<' '<<wk<<endl;
			vll regables = BFS(N,xk,adj, dk);
			for(auto i: regables){
				H[i] = (H[i]*wk)%L;//revisar la formula
			}
		}else{
			//cout<<"Accion2"<<endl;
			ll xk; cin>>xk;
			xk--;
			cout<<H[xk]<<endl;;
		}
		

	}






	return 0;

}

