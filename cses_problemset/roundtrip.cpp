#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



		void DFS(ll node, vll &dt, vll &parent, vector<bool>&visited, ll &timer,ll &initial, ll &candidate, bool & finished, ll &finitial, vvll &adj){
			visited[node]= true;
			for(auto x: adj[node]){
				if(x== initial && dt[node]>=2){
					candidate = node; 
					finitial = initial;
					finished = true;
					return ;
				}
				if(!visited[x]){
					parent[x] = node;
					dt[x] = dt[node]+1;	
		DFS(x, dt, parent, visited, timer, initial, candidate, finished, finitial, adj);
					timer = max(timer, dt[x]);
				}
			}	
		}


int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n, m;cin>>n>>m;
	vvll adj(n);
	for(int i = 0 ; i< m ; i++){
		int a, b;cin>>a>>b;
		a-- ; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}	
	ll candidate;
	ll finitial;
	bool finished = false;
	vll parent(n, -1);
	ll timer = 0;

	for(ll initial = 0 ; initial< n; initial ++){
		if(adj[initial].size()==1){continue;}
		timer = 0 ;
		for(auto x: parent) x = -1;
		vll dt(	n, -1);
		dt[initial]=0;
		vector<bool> visited(n, false);
		DFS(initial, dt, parent, visited, timer, initial, candidate, finished, finitial, adj);
		if(finished) break;
	}
	if(timer<2 || !finished){
		cout<<"IMPOSSIBLE"<<endl;
	}else{
		vll road;
		ll current = candidate;
		while(current !=finitial){
			road.push_back(current);
			current = parent[current];
		}

		road.push_back(finitial);
		reverse(road.begin(), road.end());

		road.push_back(finitial);
		cout<<road.size()<<endl;
		for(auto x: road ) cout<<x+1<<' ';
		cout<<endl;

	}

	return 0;

}
