#include<bits/stdc++.h>
typedef long long ll;
using namespace std;



int main(){

	int n;cin>>n;
	using pa = pair<ll, ll>;
	vector<pa> points;
	set<pa> sp;
	ll Mx=0;ll My = 10e7;
	for(int i = 0 ; i< n ; i++){
		ll x, y ;cin>>x>>y;
		x--; y--;
		Mx = max(x, Mx);
		My = min(y, My);
		points.push_back({x,y});	
		sp.insert({x,y});
	}
	Mx++; My++;
	vector<pa> moves={
		{1,0},{0, 1},{0, -1},{-1,0} 
	};

	vector<vector<bool>> visited(Mx, vector<bool> (My, false));
	for(auto [x,y]: points){
		queue<pa> q;
		q.push({x,y});
		pa choice;
		while(!q.empty()){
			auto [cx,cy] = q.front();
			q.pop();
			visited[cx][cy]=true;
			for(auto [dx, dy]: moves){
				bool found = false;
				if(sp.count({cx+dx, cy+dy})!=0){
					found = true;
					q.push({cx+dx, cy+dy});
				}else{
					choice = {cx+dx, cy+dy};
				}
				if(!found){
					while(!q.empty())q.pop();
					cout<<choice.first+1<<' '<<choice.second+1<<endl;
					break;
				}	
			}
		}
		for(auto x: visited){
			for(auto y: x) y = false;
		}
	}


	return 0;
}
