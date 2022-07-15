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

	ll t; cin>>t;
	while(t--){
		ll n ; cin>>n; 
		vll a;
		ll sol;
		for(int i = 0 ;i< n; i++){
			ll g; cin>>g;
			a.pb(g);
		}
		for(int i = 0 ; i< n; i++){

			ll cxor=0;
			for(int j = 0 ; j < n; j++){
				if(j!=i){
					cxor^=a[j];
				}
			}
			if(cxor==a[i]){
				cout<<cxor<<'\n';
				break;
			}

		}
	}	

	return 0;
}


