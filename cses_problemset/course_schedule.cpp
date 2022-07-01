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

void tps(ll i, vector<bool> &v, vvll &adj, vll &s, bool &c){
	v[i] = true;
	for(auto x: adj[i]){
		if(!v[x]){
			tps(x, v, adj, s);
		}
	}	
	s.pb(i);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, m ; cin>>n>>m;
	vvll adj(n);
	vector<bool> v(n, false);
	vector<ll> s;
	bool c = false;
	for(int i = 0 ; i<m ; i++){
		ll a, b;
		cin>>a>>b;
		a--; b--;
		adj[a].pb(b);
	}





	for(int i= 0 ; i< n; i++){
		if(!v[i]){
			tps(i, v, adj, s, c);
		}
	}
	reverse(s.begin(), s.end());
	for(auto x: s) cout<<x+1<< ' ';
	cout<<'\n';
	
	return 0;
	
}
