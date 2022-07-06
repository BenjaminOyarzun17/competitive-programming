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





vvpll kruskal(){
	vvpll mst;
	vector<pair<ll, pll>>;//w, (u, v)
	DSU d; d.init(n);
	
	sort(e.begin(), end());
	for(auto e: v)if(d.join(e.second.first, e.second.second))mst.pb({e.second.first, e.second.second});
	return mst;

}

vvll kruscals(vvpll &edges, ll n){
	//si los nodos son de forma w, (u, v):
	sort(edges.begin(), edges.end());
	dsu d; dsu.init(n);
	vvll sol ;
	for(auto [w, p]: edges){
		if(d.join(p.first, p.second)){
			sol.pb(p);
		}
	}
	return sol	;
}

struct dsu{
	vll e;
	void init(ll n){
		vll a(n, -1);	
		e= a;//PUEDE que tenga que usar pointer
	}
	dsu(vll &a){
		e= a;
	}
	ll get(ll n ){
		return e[n]<0? n: e[n] = get(e[n]);
	}

	bool join(ll x, ll y){
		x = get(x);
		y = get(y);
		if(x==y)return false;
		if(x>y)swap(x, y);

		get[x]+=get[y];get[y]=x;
		return true;
	}
}




int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}




