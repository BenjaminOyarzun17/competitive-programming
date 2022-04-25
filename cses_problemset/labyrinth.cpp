#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vll;
typedef vector<vll>vvll;
typedef pair<ll, ll> pll;
bool bounds(ll x, ll y , ll n , ll m){
	if(x>=0 && x<n && y>=0 && y< m)return true;	
	return false;
}
int main(){
	int n, m; cin>>n>>m;
	vvll adj(n);
	pll start;	
	pll finish;
	for(int i = 0 ; i< n ; i++){
		for(int j = 0 ; j< m; j++){
			char c;cin>>c;
			adj[i].push_back(c);
			if(c =='A') start = {i, j};

			if(c =='B') finish = {i, j};
		}
	}
	vector<pll> moves = {{1, 0}, {0,1}, {-1, 0}, {0, -1}};
	queue<pll> q;
	vector<vector<bool>> visited( n , vector<bool> (m, false));

	vector<vector<pair<char, pll>>> parent( n , vector<pair<char,pll>> (m));
	q.push(start);
	visited[start.first][start.second]= true;	
	while(!q.empty()){
		auto [x, y] = q.front(); q.pop();
		for(auto [dx, dy]: moves){
			ll nx= x +  dx;

			ll ny= y +  dy;
			if(bounds(nx, ny, n, m)){
				if(!visited[nx][ny] && adj[nx][ny]!='#'){
					visited[nx][ny] =true;
					if(dx == 1 && dy == 0){

						parent[nx][ny] = {'D', {x, y}};
					}

					if(dx == 0 && dy == 1){

						parent[nx][ny] = {'R', {x, y}};
					}

					if(dx == -1 && dy == 0){

						parent[nx][ny] = {'U', {x, y}};
					}
					if(dx == 0 && dy == -1){

						parent[nx][ny] = {'L', {x, y}};
					}
					q.push({nx, ny});
				}
			}
		}	
	}	
	if(visited[finish.first][finish.second]){
		cout<<"YES"<<endl;
		string solution = "";	
		
		while (finish.first != start.first || finish.second != start.second){

			solution.push_back(parent[finish.first][finish.second].first);

	
			finish = parent[finish.first][finish.second].second;
		}

		cout<<solution.size()<<endl;
		for(int i = solution.size()-1; i>=0; i--){
			cout<<solution[i];
		}
		cout<<endl;
	
	}else{

		cout<<"NO"<<endl; 

	} 
	return 0;
}
