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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll t;cin>>t;
	while(t--){
		ll n, m;cin>>n>>m;
		map<ll, ll > ct;
		pll M = {0,0};
		vll a;
		for(int i = 0 ; i< n; i++){
			ll g ;cin>>g;
			a.pb(g);
			ct[g]++;
		}
		for(auto p: ct) if (M.second<p.second) M = p;
		

	
	}
	return 0;
}


