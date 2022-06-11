#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main(){
	ll t ;cin>>t;
	while(t--){
		ll n;cin>>n;
		vll a(n);
		ll total = 0 ;
		for(auto &x: a) cin>>x;
		for(auto x: a) total += x;	
		ll sol = a[0];
		ll cu = a[0];		
		ll start = 0 ;
		for(int i = 1 ; i< n-1 ; i++){
			if(a[i]>cu+a[i]){
				cu = a[i];
				start = i;
			}else{
				cu+= a[i];
			}
			if(cu>sol){
				sol = cu;
			}
		}

		ll sol2 = a[1];
		ll cul = a[1];		
		for(int i = 2 ; i< n ; i++){
			if(a[i]>cul+a[i]){
				cul = a[i];
			}else{
				cul+= a[i];
			}
			if(cul>sol2){
				sol2 = cul;
			}
		}
		sol = max(sol, sol2);



		if(total<= sol){
			cout<<"NO"<<endl;
		}else{
				
			cout<<"YES"<<endl;
		}
	}	
	return 0;
}
