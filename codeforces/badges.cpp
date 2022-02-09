#include<bits/stdc++.h>
using namespace std;


int DFS(vector<vector<int>>&adj, vector<bool> &visited, int node){
	visited[node] = true;
	
	for(auto x: adj[node]){
		if(visited[x]){

			return x;
		}else{
			return DFS(adj, visited, x);
		}
	}
	return -10;

}



int main(){
	int n;
	cin>>n;
	vector<vector<int>> adj(n);
	vector<int> p(n);
	for(auto &x: p)cin>>x;
	for(int i = 0 ; i< n ; i++){
		adj[i].push_back(p[i]-1);
	}
	for(int i = 0 ; i< n ; i++){
		vector<bool> visited(n, false);
		cout<<DFS(adj, visited,i)+1<<" "; 	
	}	
	cout<<endl;
	return 0;
}
