#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> &adj, vector<bool> &visited, int node, vector<int>&solution){
	visited[node]=true;	
	node = adj[node]-1;
	if(!visited[node]){
		DFS(adj, visited, node, solution);	
	}else{
		solution.push_back(node+1);
	}
}



int main(){

	int n;	cin>>n;
	vector<int> adj(n);
	for(int i = 0; i< n; i++){
		int g;cin>>g;
		adj[i]=g;
	}
	vector<int> solution ;
	for(int i = 0 ; i< n; i++){
		vector<bool> visited (n, false);
		DFS(adj, visited, i, solution);	
	}
	for(auto x: solution) cout<<x <<' ';
	cout<<'\n';
	return 0;
}
