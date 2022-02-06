#include<bits/stdc++.h>

typedef long long ll;
using namespace std;



void BFS(vector<vector<ll>> &adj, vector<ll> & strenghts, vector<bool> &visited, ll x, ll strength){
	vector<ll> d(adj.size());
	if(strength>=0){
	queue<ll>pending;
	pending.push(x);
	ll level = 0;
	while(!pending.empty()&& level<strength){
		ll f= pending.front();
		visited[f]=true;
		pending.pop();
		for(auto tau: adj[f]){
			visited[tau]=true;
			pending.push(tau);
			d[tau] = d[f]+1;
			level = max(d[tau], level);
		}
		

	}

	}


}









void solve(){


	ll t;
	scanf("%lld", &t);
	while(t--){
		ll N, R, M;
		cin>>N>>R>>M;
		vector<vector<ll>>adj(N);
		vector<ll> strengths(N, -1);//-1 = no soldier
		
		vector<bool>visited(N, false);
		for(int i = 0 ; i< R; i++){
			ll a, b;
			cin>>a>>b;
			adj[a-1].push_back(b-1);
			adj[b-1].push_back(a-1); 
		}
		for(int i = 0 ; i< M ; i++){
			ll K, S;
			cin>>K>>S;
			strengths[K-1]=S;
		}	
		//for(auto x:strengths)cout<<x<<' ';
		//	cout<<endl;
		ll dum= 0 ; 
		for(auto x : strengths){
			if(x!=-1){
				//cout<<dum<<' '<<x<<endl;
				BFS(adj,strengths,  visited,dum , x);
 			} 
			dum++;

		} 
		bool notVisFound = false;
		for(auto x: visited){
			if (x== false) notVisFound = true;	
		}
		if(notVisFound){
			cout<<"NO"<<endl;
			for(auto x: visited)cout<<x<<endl;
		}else{
			cout<<"YES"<<endl;
			for(auto x: visited)cout<<x<<endl;
		}
	}


}





int main(){
	
	solve();
	return 0;


}

