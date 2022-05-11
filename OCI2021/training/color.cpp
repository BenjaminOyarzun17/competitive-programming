#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;


int main(){
	int n, m ;cin>>n>>m;
	vvll adj(n);
	vll visited(n, -1);
	for(int i = 0 ; i < n; i++){
		int a, b;
		cin>>a>>b;
		a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	queue<ll> q;
	q.push(0);
	visited[0]= 0;
	while(!q.empty()){
		ll current = q.front(); q.pop();
		for(auto x: adj[current]){
			if(visited[x]==-1){
				q.push(x);
				visited[x] = visited[current]+1;
			}

		}
	}	

	for(auto x: visited)cout<<x<<' ';
	cout<<endl;


	return 0;



}
