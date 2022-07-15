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
	//0-> no descubierto
	//1-> buscando inverso
 	//2-> inverso encontrado


	while(t--){
		ll n; cin>>n;
		map<ll, ll> inv;
		vll a;
		ll z = 0 ;
		bool iF= false;	
		for(int i = 0 ; i< n; i++){
			ll g ; cin>>g;
			if(g==0)z++;
			if(inv[g]==0){
				inv[g]++;
			}
			if(inv[-g]==1 && g!=0){
				iF= true;		
			}
		}
		if(z>=2){
			cout<<"YES"<<endl;
		}else if(z==1){
		
			if(iF){

				cout<<"YES"<<endl;
			}else cout<<"NO"<<endl;
	
		}else cout<<"NO"<<endl;
	}



	return 0;
}


