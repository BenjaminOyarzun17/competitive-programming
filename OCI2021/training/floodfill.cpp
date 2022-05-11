#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;



bool bounds( ll x, ll y , ll n, ll m){
	if(x>=0 && x< n && y>=0 && y< m ){
		return true;
	}return false;
}




int main(){
	ll n, m;
	cin>>n>>m;
	vector<vector<char>> adj(n);
	ll mc = 0;ll repetitions = 0;
	for(int i = 0 ; i < n; i ++){
		for(int j = 0 ; j< m ; j++){
			char c; 
			cin>>c;
			adj[i].push_back(c);
			if(c=='M') mc ++;	
		}
	}	
	vector<pll> moves = {
		{1,0}, {0, 1}, {-1, 0}, {0, -1}, {1,1}, {-1,-1}, {-1,1}, {1,-1}
	};
	while(mc>0){
		pll start;
		repetitions++;
		bool f = true;
		for(int i = 0 ; i < n; i ++){
			for(int j = 0 ; j< m ; j++){
				if(adj[i][j]=='M') start ={i, j} ;
			}
		}	
		if (f){

			queue<pll> q; q.push(start);	
			vector<vector<bool>> visited(n, vector<bool> (m ,false));
			visited[start.first][start.second] = true;

			adj[start.first][start.second] = '.';	
			mc--;
			while(!q.empty()){
				pll c = q.front(); q.pop();
				for(auto [dx,dy]: moves){
					pll nx = {c.first+dx,c.second+dy};
					if(bounds(nx.first, nx.second, n, m)){

						if(!visited[nx.first][nx.second] && adj[nx.first][nx.second] == 'M'){
							q.push(nx);
							visited[nx.first][nx.second]= true;
							mc --;
							adj[nx.first][nx.second] = '.';	
						}
					}
				}		

			}
			if (mc == 0 ) break;	
		} else{
			break;
		}
	
		}

		cout<<"finished"<<endl;
		for(auto x: adj){
			for(auto y: x){
				cout<<y<< ' ';
			}
			cout<<endl;
		}
		cout<<"total repetitions: " << repetitions<<endl;	

	return 0;
}
