#include<bits/stdc++.h>

using namespace std;
typedef long long ll ;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
ll INF = 10e18;
struct edge{
	ll second, c, p ;
};
struct customl{
	bool operator(edge a, edge b){
		return a.p< b.p;
	}


}

int main(){
	ll n, ll m ;cin>>n>>m;
	vll colors(n, 0);
	vector<vector<edge>> adj(n, vpll);
	for(int i= 0 ; i< m ; i++){
		ll a , b, c, p;
		cin>>a>>b>>c>>p;
		edge e;
		e.second = b; 
		e.c = c;
		e.p = p;
		adj[a].push_back(e);
		e.second = a;
		adj[b].push_back(e);
	}
	priority_queue<edge, vector<edge>, customl> pq;
	vector<ll> dist(n, INF);
	edge start;
	start.second = 0;
	start.e= 0;
	start.p = 0;	
	pq.push(0);
	dist[0]= 0;
	while(!pq.empty()){
		u = pq.top();
		pq.pop();
		if(u.p != dist[u.second]){
			continue;
		}
		for(edge v: adj[e.second]){
			
		}


	}


	return 0;
}
