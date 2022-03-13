#include<bits/stdc++.h>

using namespace std;


void DFS(vector<int> &visited, vector<vector<int>> &adj, int node, int dt){

	visited[node]=dt;
	for(auto x: adj[node]){
		cout<<x<<endl;
		if(visited[x]==0){
			DFS(visited, adj, x, dt+1);	
		}
	}	
}



void solve(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>>adj(n+1);
		vector<int> visited(n, 0);
		for(int i = 0 ; i<n ; i++){
			int g;
			cin>>g;
			if(g ==0 ){
				adj[i].push_back(n);
			}else{
				adj[n].push_back(i);
			}
		}
		DFS(visited, adj, 0, 1);
		bool isolated = false;
		for(auto x: visited) {
			if(x==0) isolated = true;
			cout<<x<<' ';
		}			
		cout<<endl;

		if(isolated) {
			cout<<-1<<endl;
		}else{
			for(int i = 0 ; i<=n ; i++){
				for(int j = 0 ; j <=n; j++){
					if(visited[j]==i+1){
						cout<<j<<' ';
					}
				}
			}	
			cout<<endl;

		}
	}


}

int main(){
	solve();

	return 0;
}
