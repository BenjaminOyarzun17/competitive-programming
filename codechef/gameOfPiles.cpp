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
		ll n;
		cin>>n;
		vll a;	

		ll sum = 0;
		bool one = false;
		for(int i = 0 ; i< n; i++){
			ll g; cin>>g;
			if(g==1) one = true;
			else if(g>1 ){
				sum+=g-2;
			}
		}

		if(one){
			cout<<"CHEF"<<endl;
		}else{
			if(sum & 1){
			cout<<"CHEF"<<endl;
			}else cout<<"CHEFINA"<<endl;
		}

	}


	return 0;
}


