#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<vector<ll>> adj(n);
		for(int i = 0 ; i< n-1 ; i++){
			ll a, b;
			cin>>a>>b;
			a--; b--;
			adj[a].push_back(b);

			adj[b].push_back(a);
		}
		ll M = 0;
		//for(int i = 0 ; i< n; i++){
			vector<ll> vis(n, -1);
			queue<ll> q; 
			q.push(n-1);
			vis[n-1]=0;
			while(!q.empty()){
				ll cu = q.front();
				q.pop();
				for(auto x: adj[cu]){
					if(vis[x]==-1){
						q.push(x);
						vis[x] = vis[cu]+1;		
						M = max(M, vis[x]);
					}
				}
				
			}
		//}
		cout<<M<<'\n';
	}




}
