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
		ll mt, mn, sm;
		cin>>mt>> mn>>sm;
		if(mt*mn<=sm){
			cout<<mt*((ll)pow(mn, 2))<<endl;
		}else{
			ll csum = 0;
			ll ans = 0;
			ll ct = 0;
			while(csum <=sm &&  ct<=mt ) {

				ll a2 = (ll )pow(mn,2);
				if(csum+mn> sm){
					ans += pow(sm-csum , 2);
					break;
				}else ans+= a2;	
					
				csum+=mn; 
				ct++;	
			}
			cout<<ans<<endl;

		}

	}


	return 0;
}


