#include<bits/stdc++.h>


using namespace std;


void distance(vector<vector<int>> &adj, vector<vector<bool>> &visited,vector<vector<int>>&distances, int distance, int node, int girl){
	visited[node]=true;
	distance ++;
	if(adj[node]== girl){
		distances[node].push_back(distance);
	}else{
		for(auto x: adj[node]){
			if(visited[x]==false){
				distance(adj, visited, distance, x, girl);
			}
		}	
	}


}





int main(){

	int n;
	cin>>n;

	vector<vector<int>>adj(n);
	vector<boo> visited(n, false);	
	vector<vector<int>>distances(n);//distances[0] no cuenta porque es consigo mismo
	for(int i = 0 ; i< n-1;i ++){
		int u, v;
		cin>>u>>v;
		adj[u-1]=v-1;
		adj[v-1]=u-1;
	}
	int g;
	cin>>g;
	vector<int> girls;
	for(int i = 0 ; i< g; i++){
		ing gi;
		cin>>gi;
		girls.push_back(gi-1);
	}	
	int minDist=100000;
	for(auto x: girls){
		distance(adj, visited, distances, 0, 0, x);
	}
	for(int i = 1 ; i< n ; i++){
		for(auto x: distances[i]){
			minDist= min(minDist, x);
		}
	}
        int candidate = n+1;
	for(int i = 1 ; i< n ; i++){
		for(auto x: distances[i]){
			if(x==minDist){
				candidate = min(i, candidate);	
			}
		}
	}
	cout<<candidate++<<endl;
}



