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
struct cg{
	bool operator()(pll a, pll b){
		return a.second< b.second;
	}
};

ll rec(ll i, vll &tin, vll &tout,vll &count  ){
	if(count[i]!=0){
		return count[i];
	}else{

	vector<ll>::iterator low;
	low = lower_bound(tin.begin(), tin.end(), tout[i]);
		if(low == tin.end()){
			return 1;
		}else{
			return rec(low-tin.begin(), tin, tout, count) +1;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n; cin>>n;
	vll count(n, 0);	
	vll tin;
	vll tout;

	for(int i = 0 ; i< n; i++){
		ll a, b; cin>>a>>b;
		tin.pb(a);
		tout.pb(b);
	}
	sort(tin.begin(), tin.end());
	sort(tout.begin(), tout.end());
	ll sol = 0;
	for(int i = 0 ; i< n; i++){
		sol  = max(sol, rec(i, tin, tout, count));
	}
	cout<<sol<<endl;
	return 0;
}


