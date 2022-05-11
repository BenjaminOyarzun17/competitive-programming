#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;
typedef vector<vll> vvll;
ll INF = 10e17;
int main(){
	ll n, m;cin>>n>>m;
	vvll adj(n);
	for(int i = 0 ; i< m ; i++){
		ll a, b, w; cin>>a>>b>>w;
		a--; b--;
		adj[b].push_back({a,w});	
		adj[a].push_back({b,w});	
	}	
	priority_queue<pll, vector<pll>, greater<pll>>pq;
	pq.push({0,0});
	vector<ll> dist(n, INF);
	dist[0]=0;
	vector<ll> parent (n, -1);
	while(!pq.empty()){
		auto [cw, x] = pq.top(); pq.pop();
		if(cw!= dist[x])continue;
		for(auto [v,w]: adj[x]){
			if(cw+w< dist[v]){
				dist[v]= cw+w;
				pq.push({dist[v], v});
				parent[v] = x;
			}
		}
	}
	if(dist[n-1] == INF){
		cout << "-1\n";
		return 0;
	}
	else{
		vector <int> camino;
		for(int u = n-1; u != -1; u = parent[u]){
			camino.push_back(u);
		}
		for(int i=camino.size()-1; i>=0; i--){
			cout << camino[i]+1 << ' ';
		}
		cout << '\n';
	}


	return 0;






}
