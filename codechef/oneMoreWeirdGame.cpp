#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


bool check(ll dx, ll dy, ll n, ll m){
	if(dx>=0 && dx < n && dy>=0 && dy< m){
		return true;
	}return false;


}
int main(){
	int t; cin>>t;
	using pa = pair<ll, ll>;
	while(t--){
		ll n, m; cin>>n>>m;
		vector<vector<bool>> visited(n, vector<bool> (m, false));
		ll score = 0;
		vector<pa> moves ={
			{1,0},{0,1},{-1, 0},{0, -1}
		};
		queue<pa> q;
		q.push({0,0});
		while(!q.empty()){
			auto [x,y] = q.front();
			q.pop();
			if(!visited[x][y]){
			visited[x][y]=true;
			for(auto [px, py]: moves){
				ll dx, dy;
				dx = x+px;
				dy = y+py;		
				if(check(dx, dy, n, m)){
					if(!visited[dx][dy]){
						q.push({dx, dy});
					}else{
						score ++;
					}
				}
			}}
		}		
		cout<<score<<endl;
	}
	return 0;
}
