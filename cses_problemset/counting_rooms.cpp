#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<char> vll;
typedef vector<vll> vvll;

bool bounds(ll x, ll y, ll n, ll m){
			if(x>=0 && x<n && y>=0 && y< m)return true;
			return false;
}
int main(){
	ll n, m ;cin>>n>>m;
	vvll adj(n);
	ll count=0 ;
	ll left = 0;
	vector<vector<bool>> visited( n, vector<bool> (m, false));
	for(int i = 0 ; i< n ;i ++){
		for(int j = 0 ; j< m ; j++){
			char c;cin>>c;
			adj[i].push_back(c);
			if(c == '.') left ++;
		}
	}


		vector<pll> moves = {{1,0},{0,1},{-1,0},{0,-1}}	;
		for(int i = 0 ; i< n ;i ++){

			for(int j = 0 ; j< m ; j++){

				pll start;
				if(adj[i][j] == '.') {
					start = {i,j};
					count ++;
					queue<pll> q;
					q.push(start);
					adj[start.first][start.second] = '!';	
					left --;
					while(!q.empty()){
						auto [x,y] = q.front();
						visited	[x][y]=true;
						q.pop();
				
						for(auto [dx,dy]: moves){
							int nx = x +dx;
							int ny = y+ dy;	
							if(bounds(nx, ny, n, m)){
								if(adj[nx][ny]== '.' && !visited[nx][ny]){
									q.push({nx, ny});
		
									adj[nx][ny] = '!';	
									left --;
								}
							}
						}
			
					}		

				}
				
			}

		}
		



	cout<<count<<endl	;

	return 0;
}
