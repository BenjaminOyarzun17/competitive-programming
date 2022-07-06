#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

ll INF = 1e18;
ll mod = 1e9+7;




void countChildren(ll n, vvll &adj, vector<bool>&v, vll & children){
	v[n] = true;
	ll count =0;
	for(auto x: adj[n]){
		if(!v[x]){
			count++;

			countChildren(x, adj, v, children);
			count+=children[x];

		}
	} 
	children[n]= count;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll t; cin>>t;
	while(t--){

	ll n ;cin>>n;
	vvll adj(n);
	vll children(n, 0);
	vector<bool> visChild(n, false);
	for(int i= 0 ; i< n-1 ;i ++){
		ll a, b;
		cin>>a>>b;
		a--; b--;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	countChildren(0, adj, visChild, children);
	ll saved= 0 ;

	queue<ll> q;
	q.push(0);
	vector<bool> v(n, false);
	while(!q.empty()){
		ll u = q.front(); q.pop();
		v[u] = true;
		cout<<u+1<<": size: "<<adj[u].size()<<endl;
		if(adj[u].size()==3){
			vpll prox;
			for(auto x: adj[u]){
				if(!v[x])prox.pb({children[x], x});
			}
			sort(prox.begin(), prox.end());
			q.push(prox[0].second);
				
			ll ps = children[prox[1].first];
			if(ps>0){saved+=ps;}
		}else if(adj[u].size()<=2){
			if(u==0){
				if(adj[u].size()==2 ){

				vpll prox;
				for(auto x: adj[u]){
					if(!v[x])prox.pb({children[x], x});
				}

				sort(prox.begin(), prox.end());
				q.push(prox[0].second);
				ll ps = 0;	
				for(auto x: prox) ps = max(x.first, ps);
				cout<<ps<<endl;
				if(ps>0){saved+=ps;}
				}else{
				
				for(auto x: adj[u]){q.push(x);}
				}
			}else {
			for(auto x: adj[u]){
				if(!v[x]){
					if(children[x]-1>0)saved+=children[x]-1;
				}
			}

			}
		}
		
	}
	cout<<saved<<'\n';
	for(auto x: children) cout<<x<< ' ';
	cout<<endl;
	}
	
	return 0;
}


