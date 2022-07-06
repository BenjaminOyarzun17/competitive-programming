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
	DSU(vll &a ){
		e=a;
	}
	ll get(ll x){
		return e[x]<0? x: get(e[x]);
	}
	bool join(ll x, ll y){
		x = get(x);
		y = get(y);
		if(x==y)return false;
		if(x>y)swap(x,y);
		e[x]+= e[y]; e[y] =x;	
		return true;
	}
};


















struct dsu{
	vll e;
	dsu(vll &a){
		e= a;
	}
	ll find(ll x){
		return e[x]<0? x: find(get[x]);
	}
	bool join(ll x, ll y){
		x = find(x);
		y = find(y);
		if(x==y) return false;
		if(x>y) swap(x, y);
		e[x] += e[y]; e[y] = x;
		return true;
	}
};







struct DSU{
	vll e;
	DSU(vll &a){e= a;}
	
	ll find(ll x)	{
		return e[x]<0 ? x: e[x] = find(e[x]);
	}
	bool join(ll x, ll y){
		x = find(x);
		y = find(y);
		if(x==y)return false;
		if(x>y)swap(x, y);
		e[x]+= e[y]; e[y] = x;
		return true;	
	}



};









struct DSU{
	ll N ;
	vll dsu;
	dsu(vll &a)	{
		N = a.size();
		dsu = a(N, -1);
	}
	ll get(ll x){
		return (dsu[x]<0)? x: dsu[x]= get(dsu[x]);
	}
	bool join(ll x, ll y){
		x= dsu[x];
		y= dsu[y];
		if(x==y)return false;
		if(dsu[x]>dsu[y])swap(x, y);
		dsu[x]+= dsu[y]; dsu[y]= x;
	}

};






int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}

