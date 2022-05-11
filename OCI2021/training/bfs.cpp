#include<bits/stdc++.h>

using namespace std;



void BFS(vector<vector<int>>&adj,vector<int>&dist, vector<bool> &visited, int n ){

	queue <int> q;
	q.push(n);
	dist[n]=0;
	while(!q.empty()){
		int current = q.front();
		q.pop();
		visited[current]= true;
		for(auto x: adj[current]){
			if(!visited[x]){
				dist[x] = dist[current]+1;				
				q.push(x);
			}
		}	

	}




}

int main(){
	



	return 0;
}
