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
		ll n, k; cin>>n>>k;
		ll cM=0;
		ll aM;	
		vll a;
		if(n&1){
			aM = n/2;
		}else aM =(n/2) -1;
		for(int i = 0 ; i< n; i++){
			ll g; cin>>g;
			a.pb(g)	;
		}
		for(int i = 1 ; i< n; i++){
			if(i<=n-2 && i>0 && a[i]> a[i-1]+a[i+1]){
				cM++;	
			}
		}	
		if(k ==1){
			cout<<aM<<'\n';
		}else cout<<cM<<'\n';
	}



	return 0;
}


