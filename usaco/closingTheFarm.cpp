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

struct DSU{
	ll count = 0;
	vll e;
	DSU(vll &a){
		e= a;count = a.size();
	}
	ll get(ll x){
		//return e[x]<0? x: e[x]=get(e[x]);
		//no comprimo camino
		return e[x]<0? x: get(e[x]);
	}
	bool join(ll x, ll y){
		x = e[x];
		y = e[y];
		if(x==y){
			return false;
		}
		if(e[x]>e[y])swap(x,y);
		e[x]+= e[y]; e[y]= x;
		count--;
		return true;
	}
	bool disconnect(ll x){
			
	}
};



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	ll n, m;cin>>n>>m;
	vll a(n, -1);
	DSU dsu(a);
	while(m--){
		ll a, b;cin>>a>>b;
		a-- ; b--;		
		dsu.join(a, b);
	}

	return 0;
}


