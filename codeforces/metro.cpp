#include<bits/stdc++.h>

typedef long long ll;
using namespace std;






void dfs(vector<vector<int>>&adj, vector<bool> &visited, int node){
	visited[node]=true;
	for(auto x: adj[node]){
		if(visited[x]== false){
			dfs(adj, visited, x);
		}
	}	


}







void solve(){


	int n, s;
	cin>>n>>s;
	vector<int> metro;
	for(int i = 0 ; i < 2; i++){
		for(int j = 0 ; j< n ; j++){
			int g;
			cin>>g;
			metro.push_back(g);
		}
	}




	vector<vector<int>> adj(2*n);
	for(int i = 0 ; i< n-1 ; i++){
		if(metro[i]==1){
			if(metro[i+1]==1){
				adj[i].push_back(i+1);
			}	
			if(metro[i+n]==1){
				adj[i].push_back(i+n);
			}
		}
	}

	for(int i = 2*n-1 ; i>n ; i--){
		if(metro[i]==1){
			if(metro[i-1]==1){
				adj[i].push_back(i-1);
			}	
			if(metro[i-n]==1){
				adj[i].push_back(i-1);
			}
		}
	}
	if(metro[n-1] == 1 && metro[2*n -1] ==1){
		adj[n-1].push_back(n-1+n);
		adj[2*n-1].push_back(n-1);
	}
	vector<bool> visited(2*n-1, false);
	dfs(adj, visited, 0);
	if(visited[s-1]==false && visited[2*s -1] ==false){
		cout<<"NO"<<endl;
		for(auto x: visited)cout<<x<<endl;
	}else{
		cout<<"YES"<<endl;
		for(auto x: visited)cout<<x<<endl;
	}

		



	//falta revisar el caso en que i= n
}





int main(){
	
	solve();
	return 0;


}

