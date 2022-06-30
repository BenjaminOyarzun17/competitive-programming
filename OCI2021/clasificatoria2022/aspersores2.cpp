#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll N, L, q ; cin>>N>>L;
	vvll adj(N);
	vvll distancias(N, vll (N, -1));
	for(int i = 0 ; i< N-1 ; i++){
		ll a, b;cin>>a>>b;
	 	a--; b--; 
		adj[a].pb(b);
		adj[b].pb(a);
	}
	vll H;
	for(int i = 0 ; i< N ; i++){
		ll h; cin>>h;
		H.pb(h);
	}
	for(int i = 0 ; i< N ; i++){
		distancias[i][i]= 0;
		queue<ll> q;
		q.push(i);
		while(!q.empty()){
			ll u = q.front();q.pop();
			for(auto x: adj[u]){
				//if(distancias[i][x]==-1 && distancias[i][u]==0){
				//if(distancias[i][x]==-1 && distancias[i][u]==1){
				if(distancias[i][x]==-1){
					q.push(x);
					distancias[i][x] =distancias[i][u]+1;
				}
			}
		}	
	}
	cin>>q;
	while(q--){
		ll T ; cin>>T;
		if(T==1){
			ll xk, dk, wk; cin>>xk>> dk>> wk;
			xk--;
			ll i = 0 ;
			for(auto x: distancias[xk]){
				if(x<=dk && x!=-1){

					H[i] = (H[i]*wk)%L;
				}i++;
			}
		}else{
			ll xk; cin>>xk;
			xk--;
			cout<<H[xk]<<endl;
		}
	}
	return 0;

}


