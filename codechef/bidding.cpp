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

	vpll a;
	for(int i = 0; i< 3; i++){
		ll g; cin>>g;
		a.pb({g, i});
			
	}
	sort(a.begin(), a.end(), greater<pll> ());
	if(a[0].second==0){
		cout<<"Alice"<<endl;
	}else if(a[0].second ==1){
		cout<<"Bob"<<endl;
	}else cout<<"Charlie"<<endl;
	
	}		
	return 0;
}


