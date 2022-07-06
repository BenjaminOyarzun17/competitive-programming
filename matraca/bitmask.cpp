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






vvll btmsk(vll &a, ll n){
	vvll sol((1<< n));
	for(int mask = 0 ; mask < (1<<n) ; mask++){
		for(int i = 0 ; i< n; i++){
			if(mask& (1<<i))sol[mask].pb(i);
		}
	}
	return sol;	
}




















vvll bitmask(ll n, vll &a){
	vvll ps((1<<n ));
	for(ll mask= 0 ;mask <= (1<<n); mask++){
		for(ll i = 0 ; i<n ; i++){
			if(mask&(1<<i))ps[mask].pb(i);
		}
	}
	return ps;
}










vvll bitwise(vll &a){
	ll n = a.size();
	vvll powerset((1<<n));
	for(ll mask = 0 ; mask<<n; mask++){
		for(int i = 0 ; i< n ; i++){
			if(mask&(1<<i)){
				powerset[mask].pb(i);
			}
		}
	}
	return powerset;
}







vvll bitmasks(vll &a){
	ll n  = a.size();
	vvll pset((1<<n));
	for(ll mask = 0 ; mask < (1<<n); mask++){
		for(ll i = 0 ; i< n; i++){
			if(mask&(1<<i))pset[mask].pb(i);
		}
	}
	return pset;
}

vvll btmsks(vll  &a){
	ll n = a.size();
	vvll subsets((1<<n));
	for(ll mask = 0 ; mask<(1<<n); mask++){
		for(int i = 0; i< n; i++){
			if(mask&(1<<i))subsets[mask].pb(i);
		}
	}
	return subsets;
}




vvll btm(vll & a){
	ll n = a.size();
	vvll pset((1<<n));
	for(ll mask= 0 ; mask < (1<<n)	; mask++){
		for(ll i = 0 ; i< n ; i++){
			if(mask&(1<<i))pset[mask].pb(i);
		}
	}
	return  pset;
}




int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);







	return 0;
}


