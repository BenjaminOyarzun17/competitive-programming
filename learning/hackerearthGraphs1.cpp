#include<bits/stdc++.h>
typedef  long long ll;
using namespace std;


void dfs(vector<vector<int>> &adj, vector<int> &visited, int node, int current){
	visited[node]= current;
	for(auto x: adj[node]){
		if (visited[x] ==0){

			dfs(adj, visited,x, current);
		}
	}


}




int main(){
	int n, e;
	cin>>n>>e;
	n=n;
	vector<vector<int>> adj(n);
	vector<int> visited(n, 0);



	for(int i = 0 ; i< e; i++){
		int u,v;
		cin>>u>>v;
		adj[u-1].push_back(v-1);
		adj[v-1].push_back(u-1);

	}
	
	int current = 0;
	for(int i = 0 ; i< n; i++){
		
		if(visited[i]==0){
			
			current ++;
			dfs(adj, visited, i, current);	
		}

	}	
	cout<<current<<endl;
	//for(auto x: visited)cout<<x<<endl;
	return 0;
}
