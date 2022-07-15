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
		ll n; cin>>n;
		vll a, b;
		for(int i = 0; i< n; i++){
			ll g; cin>>g ;
			a.pb(g);
		}
		ll pindex = -1;
	 	ll d = -1;
		bool c = false;
		for(int i = 0; i< n; i++){
			ll g; cin>>g ;
			b.pb(g);
			if(g>0){
				pindex = i;	
				if(d==-1){
					if(a[i]-b[i]<0)c = true;
					else d = a[i]-b[i];
				}else{
					if(a[i]-b[i]!=d )c = true;
				}
			}
		}
		if(c){
			cout<<"NO"<<endl;
			
		}else{
			for(int i = 0 ; i< n ; i++){
				if(b[i]==0 && a[i]>d && d>0)c= true;
			}
			if(c){
				cout<<"NO"<<endl;
			}else cout<<"YES"<<endl;

		}
	}
	return 0;
}


