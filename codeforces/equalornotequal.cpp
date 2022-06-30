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
		return e[x]<0?x: e[x]= get(e[x]);
	}
	bool join(ll x, ll y){
		x = get(x);
		y = get(y);
		if(x==y)false;
		if(e[x]>e[y])swap(x,y);
		e[x]+=e[y]; e[y]=x;
		return true;
	}

};



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll n;cin>>n;
	while(n--){
		string s;
		cin>>s;
		ll l = s.size();
		vll a(l , -1);
		vll b(l , -1);
		DSU R(a);
		vpll nr; 
		bool contrad= false;
		for(int i = 0 ;i< l ; i++){
			if(s[i]=='E'){
				if(i==l-1){
					R.join(0, l-1);
				}else R.join(i, i+1);
			}else{
				if(i==l-1){
					nr.pb({i, 0});
				}else nr.pb({i, i+1});
			}
		
		}	
		for(auto [x,y]	: nr){
			if(R.get(x)== R.get(y)){
				contrad= true;
				break;
			}
		}
		if(!contrad){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
	return 0;
}


