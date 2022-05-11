#include<bits/stdc++.h>
typedef long long ll;
using namespace std;





/*
sospecho que este problema se soluciona mucho mejor si implementase BFS



*/



void DFS(ll r, ll c,vector<pair<ll, ll>> &moves,  vector<vector<bool>> &visited, ll &count , ll k){
	visited[r][c] =true;
	count++;
	for(auto x: moves){
		ll nr, nc;		
		nr = r + x.first;
		nc = c + x.second;
		if(0<= nr && 8> nr && 0<=nc && 8>nc && k>0 && !visited[nr][nc]){
			
		//cout<<nr<<' '<<nc<<endl;
			DFS(nr, nc, moves, visited, count, k-1);
		}
		
	}	



}


int main(){
	int t;cin>>t;
	while(t--){
		ll r, c, k;cin>>r>>c>>k;
		vector<vector<bool>> visited(8, vector<bool> (8, false));
		ll count = 0;
		vector<pair<ll, ll>> moves = {
		{1,0}, 
		{0,1}, 
		{0,-1}, 
		{-1,0}, 
		{1,1}, 
		{-1,1}, 
		{1,-1}, 
		{-1,-1}
		};
		pair<ll, ll> original  = {r-1, c-1};	
		queue<pair<ll,ll>> q;
		q.push(original);
		ll run = 0;
		while(!q.empty() && run <10000){
			run++;
			pair<ll, ll>current = q.front();
			q.pop();
			visited[current.first][current.second] = true;

			for(auto x: moves){
				pair<ll, ll> next = {current.first+x.first, current.second+x.second};
				if(next.first>=0 && next.first<8 && next.second >=0 && next.second <8 && abs(r-1-next.first)<=k && abs(c-1-next.second)<=k ){
					//if (abs(r-1-next.first>=64 ))cout<<"surpassed"<<endl;
					if(visited[next.first][next.second]==false){
						//cout<<next.first<<' '<<next.second<<endl;

						q.push(next);				
					}			
				}	

			}
		
		}

		//cout<<count<<'\n';
		
		for(auto x: visited){
			for(auto y: x){
				if(y) count++;
				//cout<<y<<' ';
			}
			//cout<<endl;
		}
		cout<<count<<'\n';

	}



	return 0;
}
