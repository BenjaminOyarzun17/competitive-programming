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






void tps(ll u, vvll &adj, vector<bool> v, vll & topo){
	v[u] =true;
	for(auto x: adj[u]){
		if(!v[x]){
			tps(x, adj, v, topo);
		}
	}
	topo.pb(u);
}








vll command(vvll &adj, ll n){
	vector<bool> v(n,false);	
	vll topo;
	for(int i = 0 ;i< n; i++){
		if(!v[i]){
			tps(i, adj, v, topo);
		}
	}
	reverse(topo.begin(), topo.end());
	return topo;
}






void tps(vector<bool> v, vvll & adj, vll &topo, ll u){
	v[u]=true;	
	for(auto x: adj[u]){
		if(!v[u]){
			tps(v, adj, topo, x);
		}
	}
	topo.pb(x);
}




vll  exe(){
	vvll adj;
	vector<bool> v;
	vll topo;
	for(int i = 0;  i< n ; i++) {
		if(!v[i]){
			tps(i, adj,  topo, x);
		}
	}
	reverse(topo.begin(), topo.end());
	return topo;
}









void tps(ll n, vvll &adj, vector<bool> &v, vll tp){
	v[n] =true;
	for(auto x: adj[n]){
		if(!v[x])tps(n, adj, v);
	}
	tps.pb(n);
}



vll driver(){
	vll ts;	
	vector<bool> v(n, false);
	for(int i = 0; i< n; i++){
		if(!v[i])	{
			tps(i, adj, v, ts);
		}
	}
	reverse(ts.begin(), ts.end());
	return ts;
}












void tps(ll n, vvll &a, vll &sol, vector<bool>& v){
	v[n] =true;
	for(auto x: adj[n]){
		if(!v[n]){
			tps(x, a, sol, v);
		}
	}	
	sol.pb(n);
}


vll driver(){
	vvll adj(n);
	vector<bool> v(n);
	vll sol;
	cin>>...;
	for(int i = 0 ;i< n ;i++){
		if(!v[i])tps(i);
	}
	reverse(sol.begin(), sol.end());
	return sol;
}







int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


