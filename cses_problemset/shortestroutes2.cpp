#include<bits/stdc++.h>

using namespace std;
typedef long long ll; 
ll INF = 10e17;

using state = pair<ll, ll>;
typedef vector<ll> vll;
typedef vector<vector<state>> vs;
int main(){
	ll n, m, q; cin>>n>>m>>q;
	vll queries;
	vs adj(n);
	for(int i = 0 ; i< m ; i++){
		ll a, b, c;cin>>a>>b>>c;
		a-- ; b--;
		adj[a].push_back({b,c});
	}	
	for(int i = 0 ; i< q ; i++){
		ll c;
		cin>>c;
		queries.push_back(c);
	}
	priority_queue<state,vector<state>, greater<state>>pq;
	pq.push({0,0});
	vector<ll> dist(n, 10e17);
	vector<ll> p(n, -1);
	dist[0] = 0 ;
	
	while(!pq.empty()){
		auto [w, u] = pq.top();pq.pop();
		if(w!=dist[u])continue;
		for(auto [v,dw]: adj[u]){
			if(w+dw < dist[v]){
				dist[v]= w+dw;
				pq.push({dist[v], v});
				p[v]= u;
			}
		}

	}

	if(dist[n-1] == INF){
       cout << "-1\n";
       return 0;
   }
   else{
	for(auto x: dist) cout<<x<< ' ';
	cout<<endl;
   }

	return 0;
}

