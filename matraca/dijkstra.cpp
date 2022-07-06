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




struct cg{
	bool operator()(pll a, pll b){
		return a.second< b.second;
	}
};

void dijkstra(ll n, vll &adj, pll s){
	vll d(n, INF)	;	
	priority_queue<pll, vpll, cg<pll>>pq;
	pq.push(s);
	d[s.second] = 0;	
	while(!pq.empty()){
		auto [u, cw ] = pq.top(); pq.pop();
		if(d[u]!=cw)continue;
		for(auto [v, w]: adj[v]){
			if(w+ cw< d[v]){
				d[v] = w+ cw;
				pq.push({v, d[v]});
			
			}
		}
	}

}



struct cg{
	bool operator()(pll a, pll b){
		return a.second< b.second;
	}

};
void dijkstra(vvll &adj, ll start, ll n){
	vector<ll> d(n, INF);
	priority_queue<pll, vpll, cg<pll>>pq;
	pq.push({start, 0});
	d[start.first]  = 0;	
	while(!pq.empty()){
		auto [c, w] = pq.top(); pq.pop();
		if(w!=d[c])continue;
	
		for(auto [v, w]: adj[c]){
			if(d[c]+w< d[v]){
				d[v] = d[c] +w;
				pq.push({v,d[v] });
			}
			
		}
	}


}








struct cg{
	bool operator()(pll a, pll b){
		return a.second< b.second;
	}
};

void disjktra(vvpll &adj, ll n, pll start){
	vll d(n, INF);
	priority_queue<pll, vpll, cg<pll>>pq;
	pq.push(start);
	d[start.first]= 0;
	while(!pq.emty()){
		auto [u, cw]= pq.top(); pq.pop();
		if(d[u]!=cw) continue;
		for(auto [v, w]: adj[u]){
			if(d[u]+w< d[v]){
				d[v]= d[u]+w;
				pq.push({v, d[v]});
			}
		}

	}
	

}






struct nodeGreater{
	bool operator()(pll a, pll b){
		return a.second< b.second;
	}
};



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n , m;cin>>n>>m;
	vector<vpll> adj(n);
	for(int i = 0 ; i< n; i++){
		ll u,v,w;
		cin>>u>>v>>w;
		pll node = {v,w};
		adj.pb(node);	
	}
	priority_queue <pll, vpll, nodeGreater<pll>> pq;

	vll dist(n, INF);	

	while(!pq.empty()){
		auto [u, cw]=pq.top(); pq.pop();

		if(dist[u]!=cw)continue;

		for(auto [v, w]: adj[u]){
			if(dist[u]+w< dist[v]){
				dist[v]=dist[u]+w;
				pq.push({v, dist[v]});
			}
		}


	}

	return 0;
}
struct nodeGreater{
	bool operator()(pll a, pll b){
		return a.second< b.second;	
	}
}

void dijkstraAttempt2(ll n ,ll m , vector<vpll> &adj){
	priority_queue<pll, vpll, nodeGreater<pll>>pq;
	vll d(n, INF);
	while(!pq.empty()){
		auto [u, cw]=pq.top();pq.pop();
		if(cw!=d[u])continue;
		for(auto [v, w]: adj[u]){
			if(cw+w< d[v]){
				d[v]=cw+w;
				pq.push({v, d[v]};
			}
		}
	}	
}

struct cgreater{
	bool operator()(pll a, pll b){
		return a.second< b.second;
	}

};

void dijkstra3(ll n, ){

	vvpll adj(n);//asumo que ingrese datos
	priority_queue<pll, vpll, cgreater<pll>>pq;
	vll d(n, INF);
	

	while(!pq.empty()){
		auto [c, cw]= pq.top(); pq.pop();
		if(cw!=d[c])continue;
		for(auto [v, w]: adj[c]){
			if(c+cw<d[v]){
				d[v] = c+ cw;
				pq.push({v, d[v]});

			}
		}
	}



}


struct cgreater{
	bool operator ()(pll a, pll b){
		return a.firs> b.first;
	}

};
void dijkstra3(vvll &adj, pll inicial){

	priority_queue<pll , vpll, cgreater< pll> > pq;
	pq.push(inicial);
	vll d(n, INF);
	d[inicial.first] = 0;
	while(!pq.empty()){
		auto [u, cw]= pq.top(); pq.pop();
		if(cw!=d[u])continue;
		for(auto [v, w]: adj[u]){
			if(d[u]+w< d[v])	{
				d[v ]= d[u]+w;
				pq.push({v, d[v]});
			}
		}


	}	

}

struct cg{
	bool operator()(pll a, pll b){
		return a.second> b.second;
	}
}


void dijkstra(vvll &a, ll s, ll sw, ll n ){
	priority_queue<pll , vpll, cg<pll>> pq;
	pq.push({s, sw});
	vll d(n,  INF);
	while(!pq.empty()){
		auto [u, cw]= pq.top(); pq.pop();
		if(d[u]!=cw)continue;
		for(auto [v, w] : adj[n]){
			if(cw+w< d[v]){
				d[v]=cw+w;
				pq.push({v, d[v]});
			}
		}
	}
}



struct cg{
	bool operator ()(pll a, pll b){
		return a.second< b.second;
	}
};

void dijkstra(vvll &adj, pll s, ll n){
	priority_queue<pll, vpll, cg<pll>>pq;
	pq.push(s);
	vll d(n, INF);
	d[s.first]= 0;
	while(!pq.empty()){
		auto [u, cw] = pq.top();pq.pop();
		if(cw!=d[u])continue;
		for(auto [v, w]: adj[u]){
			if(d[u]+w< d[v]){
				d[v]= d[u]+w;
				pq.push({v, d[v]});
			}
		}
	}
}

























