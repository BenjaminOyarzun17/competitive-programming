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


struct util{
	ll node;
	ll c1;
	ll c2;
};
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n , m; cin>>n>>m;
	vll c(n);
	for(auto &x: c) cin>>x;
	vvll adj(n);
	for(int i =0 ; i< m; i++){
		ll a, b; cin>>a>>b;
		a-- ; b--;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ll longest = 0;
	for(int i =0 ; i< n; i++){
		vector<bool> v (n, false);
		map<ll, ll> ma;
		ll c0alone = 0;
		v[i]= true;
		c0alone++;
		queue<ll> q2;
		q2.push(i);
		queue<util> q;
		while(!q2.empty()){
			ll curr= q2.front(); q2.pop();
			for(auto x: adj[curr]){
				if(!v[x]){
					if(c[x] == c[curr]){
						c0alone++;
						v[x] = true;
						q2.push(x);
					}else{
						util nx;
						nx.node = x;
						nx.c1 = c[curr];
						nx.c2 = c[x];
						ma[c[x]]= 1;
						q.push(nx);
						v[x]=true;
					}	
				}
			}
		}		
		while(!q.empty()){
			util f = q.front(); q.pop();
			for(auto x: adj[f.node]){
				if(!v[x]){
					if(f.c2!=-1 && (c[x]==f.c1 || c[x]==f.c2)){
						v[x] =true;
						util nx;
						nx.node = x;
						nx.c1= f.c1;
						nx.c2 = f.c2;
						ma[f.c2]++;
						q.push(nx);
					}
				}
			}
		}
		longest = max(longest, c0alone);	
		for(auto &pair: ma){
			longest = max(longest, c0alone+ pair.second);
		}
		if (longest == n)break;
	}



	cout<<longest<<'\n';


	return 0;
}



