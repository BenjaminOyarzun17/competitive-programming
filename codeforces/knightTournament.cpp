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
	DSU(ll n){
		for(int i = 0 ; i< n; i++)e.pb(-1);
	}

	ll size(ll x){
		return -e[x];	
	}
	ll get(ll x){
		return e[x]<0?x: e[x]=get(e[x]);
	}
	void join(ll x, ll y){
		x = get(x);
		y = get(y);
		if(x==y)return ;
		if(x>y)swap(x,y);
		e[x]+= e[y]; e[y]= x;
		return ;
	}
	void display(){for(auto x:e) cout<<x<< ' ';cout<<endl;}
};


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, m;cin>>n>>m;
	ll win;
	ll prevWin = 0;
	map<ll, bool> conq;
	map<ll, pll> res;
	for(int i = 0 ; i< n; i++){
		res[i]= {i, INF};
	}
	while(m--){
		ll l ,r, x;
		cin>>l>>r>>x;
		l--; r--; x--;
		DSU d(n);
		for(int i = l ; i<= r; i++){
			d.join(x,i);
		}	
		cout<<x<<endl;
		d.display();
		for(int i = 0 ; i< n ; i++){
			if(i!=x){
				if(res[i].second > r-l+1){
					res[i]= {x, r-l+1};
				}
			}
		}
		if(-d.get(x)> prevWin){
			prevWin = r-l+1;
			win = x;
		}
	}
	res[win] = {0,0};
	for(auto p: res)cout<<p.second.second<< ' ';
	cout<<endl;

	return 0;
}


