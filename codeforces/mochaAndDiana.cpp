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


struct dsu{

	vll   e;
	ll count =0;
	dsu(vll &a){
		e=a;
		count = a.size();
	}
	ll gsize(){
		return count;
	}
	ll find(ll x){
		return e[x]<0? x: e[x]= find(e[x]);
	}
	void join(ll x, ll y){
		x = find(x);
		y = find(y);
		if(x==y)return ;
		if(x >y)swap(x, y);
		count--;
		e[x]+= e[y]; e[y]=x;
		return;
	}

};




int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll n , m1 , m2; cin>>n>>m1>>m2;
	vll f1(n, -1), f2(n, -1);	
	dsu mocha(f1), diana(f2);
	for(int i = 0 ; i< m1 ; i++){
		ll a, b;
		cin>>a>>b;
		a--; b--;	
		mocha.join(a,b)	;
	}
	for(int i = 0 ; i< m2 ; i++){
		ll a, b;
		cin>>a>>b;
		a--; b--;	
		diana.join(a,b)	;
	}
	ll count = 0;
	vpll connections;
	for(int i =0 ; i<  n-1; i++){
		for(int j = i+1; j< n; j++){

		if(mocha.find(i)!=mocha.find(j) && diana.find(i)!=diana.find(j)){
			count++;
			mocha.join(i,j)	;
			diana.join(i,j)	;
			connections.pb({i, j});
		}
		}

	}
	cout<<count<<'\n';
	for(auto [x,y]: connections){
		cout<<x+1<< ' '<<y+1<<'\n';
	}
	return 0;
}


