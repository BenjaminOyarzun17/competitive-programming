#include<bits/stdc++.h>

typedef long long ll;
using namespace std;



void DFS(vector<vector<int>>&adj, vector<bool> &visited, vector<bool>& cats, int n, int accumulate, int &accepted, int m){

	visited[n]=true;
	for(auto x: adj[n]){
		if(!visited[x]){
			if(cats[x]){
				accumulate++;
				if(accumulate<m){
					accepted++;
					DFS(adj, visited, cats, x, accumulate, accepted, m);
				}
			}else{
				accepted++;
				
				DFS(adj, visited, cats, x, accumulate, accepted, m);
			}
		}
	}	

}



void solve(){

	int n,m;
	cin>>n>> m;
	vector<vector<int>>adj(n);
	vector<bool>cats(n, false);	
	for(int i = 0 ; i< n ; i++){
		int j;
		cin>>j;
		if (j){
			cats[i]=true;
		}
	}
	for(int i=0 ; i< n-1; i++){
		int a, b;
		cin>>a>>b;	
		a--;
		b--;
		adj[a].push_back(b);	
		adj[b].push_back(a);	
	}
	int allowed = 0;
	vector<bool> visited(n, false);
	if(cats[0]==1){
	DFS(adj, visited, cats, 0, 1, allowed, m);	
	}else{
	DFS(adj, visited, cats, 0, 0, allowed, m);
	}
	cout<<allowed<<endl;
}





int main(){
	
	solve();
	return 0;


}

