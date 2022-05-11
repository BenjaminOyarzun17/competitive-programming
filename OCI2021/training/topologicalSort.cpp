#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
	

typedef vector<vll> vvll;

void topologicalSort(ll c , ll vc, stack<ll> s, vector<bool> &visited, vvll &adj){
	visited[c] = true;
	vc++;
	for(auto x: adj[c]){
		if(!visited[x]){
			topologicalSort(x,vc,  s, visited, adj);			
		}
	}
	
	s.push(c);



}



int main(){
	int t;
	cin>>t;
	while(t--){
		ll n, m;cin>>n>>m;
		vvll adj(n);
		for(ll i = 0 ; i< n; i++){
			ll a, b;cin>>a>>b;
			a --; b--;
			adj[a].push_back(b);	

		}	
		
		stack<ll> s;
		ll vc = 0;
		vector<bool> visited(n ,false);
		topologicalSort(0, vc, s, visited, adj);
		while(!s.empty()){
			cout<<s.top()<<' ';
			s.pop();
		}

		cout<<endl;
	}


	return 0;
}
