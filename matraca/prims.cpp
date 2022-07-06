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


vector<vector<pll>>adj;
vector<bool> visited(n);
vpll mst;
vll value(n, INF);
void prims(){
	priority_queue<pll, vpll, greater<pll>>pq;
	pq.push(0,0);
	visited[0] = true;
	value[0] = 0;
	while(!pq.empty()){
		auto [cw, u]=pq.top(); pq.pop();\
		for(auto [v, w]: adj[u]){
			if(!visited[v] && val[v]>w){
				val[v] =w;		
				visited[v]=true;
				mst.pb({u,v});
				pq.push({val[v], v});
			}
		}
	}
}




int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


