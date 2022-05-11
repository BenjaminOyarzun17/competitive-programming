#include<bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
ll INF = 10e18;


bool cmp(pll x, pll y){
	if(x.second

}



int main(){
	ll t;cin>>t;
	while(t--){
		
		ll n, m; cin>>n>>m;
		vector<vector<pair<ll, ll>>>adj(n);
		for(int i = 0 ; i< m ; i++){
			ll u, v, w;cin>>u>>v>>w;
			u--; v--;
			adj[u].push_back({v,w});
		}	
		priority_queue<pll, vector<pll>, FUNC>>pq;
		

		


	}


	return 0;
}
