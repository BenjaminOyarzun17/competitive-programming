#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void DFS(vector<vector<int>>&adj, vector<bool> &visited, int node,vector<int>&stations){
	visited[node]=true;
	for(auto n: adj[node]){
		if(!visited[n] && stations[n]==1 && stations[node]==1){
			DFS(adj, visited, n, stations);
		}	
	}

}



int main(){
	int n, s;cin>>n>>s;
	vector<int> stations;
	vector<vector<int>> adj(2*n);
	vector<bool> visited(2*n, false);
	for(int i = 0 ; i< 2*n; i++){
		int g;	cin>>g;	
		stations.push_back(g);	
		if(i<=n-1 && i>=1){
			for(int j = i+1; j< n; j++){
				adj[i].push_back(j);

			}
			//adj[i].push_back(i+1);
			adj[i].push_back(i+n);
		}
		if(i>n && i<=2*n -1){

			for(int j = i-1; j>n; j--){
				adj[i].push_back(j);

			}
			adj[i].push_back(i-1);
		}
	}
	//for(auto x: stations) cout<<x<<endl;
	DFS(adj, visited, 0, stations);		
	if(visited[n+s-1]){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
	for(auto x: visited)cout<<x<<  ' ';
	return 0;
}


