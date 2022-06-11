#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main(){
	ll  t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll sol = 0 ;
		ll im =0 ; ll p = 0 ;
		vll evens;
		for(int i = 0 ; i< n; i++){
			ll  x ; cin>>x;
			if(x&1){
				im ++;
			} else{
				evens.push_back(x);
			  	p ++;

			}
			
		}
		if(im>=p){
			cout<<p<<endl;
		}else{

			vll rem(p, 0);
			sol= im;
			for(int i = 0 ; i< p ; i++){

				while( evens[i]%2==0){

					evens[i]= evens[i]/2;
					rem[i]++;
				}
				
			}	
			sort(rem.begin(), rem.end());
			for(int i = 0 ; i< p-im; i++){
				sol+=rem[i];
			}
			cout<<sol<<endl;
			
		}
	}

	return 0;
}
