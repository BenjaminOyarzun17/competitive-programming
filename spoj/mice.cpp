#include<bits/stdc++.h>

using namespace std;


int BFS(vector<vector<pair<int, int>>> &adj, int mouse, int T, int E){
	
	vector<bool> visited(adj.size(), false);
	queue<int> q;
	q.push(mouse);
	bool achieved;
	vector<int> d(adj.size());
	while(!q.empty()){
		int n = q.front();
		visited[n]=true;
		q.pop();
		if(n==E ){
			if(d[n]<=T){
				achieved = true;
				break;
			}else {
				achieved=false;
				
				break;
			}
		}
		for(pair x: adj[mouse]){
			if(!visited[x.first]){
				q.push(x.first);
				visited[x.first]=true;	
				d[x.first]=d[n]+ x.second;
			}	

		}


	}
	
	if(achieved){
		return 1;
	}else {return 0;}


}





void solve(){
	int N, E, T, M;
	cin>>N>>E>>T>>M;
	vector<vector<pair<int, int>>> adj(N);//second = time needed.
	E--;
	for(int i =  0  ; i< M; i++){
		int a,b, c;
		cin>>a>>b>>c;
		adj[a-1].push_back(make_pair(b-1, c));
	}
	int approved = 0; 
	for(int i = 0 ; i< N ; i++) {
		approved += BFS(adj, i, T, E);
	}
	cout<<approved<<endl;
}






int main(){
	solve();

	return 0;





}
