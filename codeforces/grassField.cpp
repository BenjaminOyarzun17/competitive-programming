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
		ll o= 0;
		for(int i = 0 ; i< 4; i++){
			ll g; cin>>g;
			if(g==1)o++;
		}
		if(o==0){
			cout<<0<<endl;
		}else if(o==4){
			cout<<2<<endl;
		}else cout<<1<<endl;
	}



	return 0;
}


