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
	vll e;
	DSU(vll &a){
		e = a;
	}
	ll get(ll x){
		return e[x]<0 ? x: e[x]=get(e[x]);
	}
	ll showDist(ll x){
		return -e[get(x)];
	}
	void join(ll x, ll y){
		x = get(x);
		y = get(y);
		if(x==y)return ;
		if(e[x]>e[y])swap(x,y);
		e[x] +=e[y]; e[y]=x;return ;
	}


};



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll t; cin>>t;
	while(t--){
		ll n ;cin>>n;
		vll warps;
		for(int i = 0 ; i< n; i++){
			ll g;cin>>g;
			g--;
			warps.pb(g);
		}
		vll a(n, -1);
		DSU dsu(a);
		for(int i = 0 ;i< n; i++){
			dsu.join(i, warps[i]);
		}		
		for(int i = 0 ; i < n; i++){
			cout<<dsu.showDist(i)<<' ';
		}
		cout<<endl;
	}


	return 0;
}


