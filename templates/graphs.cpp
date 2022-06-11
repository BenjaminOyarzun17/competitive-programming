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

void dijkstra(){

	int n, m ; cin>>n>>m;
	vector<vector<pair<ll, ll>>> adj(n);
	for(int i=0 ;i<n ; i++){
		ll u,v,w;cin>>u>>v>>w;
		u--; v--;
		adj[u].push_back({v,w});

		adj[v].push_back({v,w});
	}
	using state = pair<ll, ll>;
	
	priority_queue<state, vector<state>, greater<state>>pq;
	
	vector<ll> dist(n, INF);
	pq.push({0,0});
	dist[0]=0;	
	vector<ll> parent(n);
	while(!pq.empty()){
		auto [peso_camino,u] = pq.top();
		pq.pop();
		if(peso_camino!=dist[u])continue; 
		for(auto [v,w] : adj[u]){
			if(peso_camino+ w< dist[v]){
				dist[v] = peso_camino+w;
				pq.push({dist[v], v});
				parent[v]=u;
			}
		}	
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}
