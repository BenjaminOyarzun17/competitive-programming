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
		ll M = 0;


		if(n == 1){
			cout<<1<<endl;
			cout<<1<<endl;
		}else if(n==2){

			cout<<2<<endl;
			cout<<1<< ' '<<2<<endl;	
		}else if(n==3){
			cout<<3<<endl;
			cout<<2<< ' '<<1<< ' '<<3<<endl;
		}else{
			
			cout<<2<<endl;
			map<ll, bool> ap;
			vll sol;		
			for(int i=1 ;i<=n/2 ; i++){
				ll j =i ;
				while(2*j<=n && !ap[j*2]){
					if(!ap[j])sol.pb(j);
					ap[j*2] =true;
					ap[j]=true;
					sol.pb(j*2);
					j*=2;
				}
			}
			for(auto x: sol)cout<<x<<' ' ;
			for(int i = 1 ; i<=n; i++){
				if(ap[i])continue;		
				cout<<i<< ' ';
			}
			
			cout<<endl;
		}



		
	}




	return 0;
}


