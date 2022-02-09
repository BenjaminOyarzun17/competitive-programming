#include<bits/stdc++.h>

using namespace std;




void DFS(vector<vector<int>>&adj, vector<bool> &visited, vector<pair<int, int>>&bridges,vector<int> &low, vector<int> &disc,  int u, int parent, int & time){

	visited[u]=true;
	low[u]=disc[u]= time++;	
	int children = 0;	
	for(auto v : adj[u]){
		if(!visited[v]){
			children ++;	
			DFS(adj, visited, bridges, low, disc, v, u, time);
			low[u]= min(low[u], low[v]);
			if( low[v]> disc[u]){
				bridges.push_back(make_pair(u,v));
			}
		}else if(parent !=v){
			//cout<<"already found"<<u<<":"<<v<<endl;
			low[u]=min(low[u], disc[v]);

		}
	}	

}


void solve(){

	int t;
	while(cin>>t){
		if(t==0) break;
		vector<vector<int>> net(t);
		vector<bool> visited(t, false);
		vector<int> low(t);
		vector<int> disc(t);
		int time = 0;
		vector<pair<int, int>> bridges;
		for(int i= 0 ; i< t; i++){
			int a, b;
			cin>>a>>b;
			for(int j = 0; j< b; j++){
				int g;
				cin>>g;
				net[a].push_back(g);
			}
		}	
		for(int i = 0; i< t; i++){
			if(!visited[i]){

				DFS(net,visited, bridges, low, disc,i , -1, time); 
			}
		}
		cout<<bridges.size()<<" critical links"	<<endl;
		for(auto x: bridges){
			cout<<x.first<<" - " <<x.second<<endl;
		}
	}


}


int main(){


	solve();
	return 0;


}
