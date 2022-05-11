#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

typedef vector<ll> vll;
typedef vector<vll> vvll;
int main(){
	
	ll n, m;
	cin>>n>>m;
	vvll adj(n);
	for(int i = 0 ; i< m ; i++){
		ll a, b;cin>>a>>b;
		a-- ; b--;
		adj[a].push_back(b);	

		adj[b].push_back(a);	
	}
	queue<ll> q;
	vll parent(n, -1);
	vector<bool> v(n, false);
	q.push(0);
	v[0]= true;
	parent[0]= 0 ;
	while(!q.empty()){
		ll c = q.front(); q.pop();
		for(auto x: adj[c]){
			if(!v[x]){
				v[x]= true;
				parent[x] = c;
				q.push(x);
			}
			if(x== n) break;	
		}	
	}	
	if(v[n-1]){
		vector<ll> route;
		ll x = n-1;

		route.push_back(n-1);
		while(x!=0){
			route.push_back(parent[x]);
			x= parent[x];
		}
		cout<<route.size()<<endl;
		for(int i = route.size()-1; i >=0 ; i--){
			cout<<route[i]+1<<' ';
		}
		cout<<endl;
	}else{

		cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}
