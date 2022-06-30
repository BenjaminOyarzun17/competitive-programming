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
	ll count;
	ll m=0;	
	DSU(vll &a){
		e= a;
		count = a.size();
	}
	void query() {
		cout<<count<< ' '<<m<<'\n';	
	}

	
	ll get(ll x){
		return e[x]<0? x: e[x]=get(e[x]);
	}
	void join(ll x, ll y){
		x= get(x);
		y= get(y);
		if(x==y)return ;
		if(e[x]> e[y])swap(x, y);
		e[x]+= e[y]; e[y]= x;
		count--;
		m = max(m, -e[x]);
		return ;
	}
	
};


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, m;
	cin>>n>>m;
	vll a(n, -1);
	DSU dsu(a);
	while(m--){
		ll a, b;
		cin>>a>>b;
		a--; b--;
		
		dsu.join(a, b);
		dsu.query();

	}
	


	return 0;
}


