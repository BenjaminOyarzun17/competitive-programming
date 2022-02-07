#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
	ll t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		if(k==1){
			cout<<"YES"<<endl;
			for(ll i = 1 ; i<=n; i++){
			cout<<i<<endl;
			}
		}else{
			if((k*n)%2!=0){
				cout<<"NO"<<endl;
			}else{
				if(k>=3){
					cout<<"NO"<<endl;
				}
				else{


				ll kount=0;
				cout<<"YES"<<endl;
				for(ll i = 2 ; i<= n*k; i=i+2){

					kount++;
					cout<<i<<' ';
					if(kount%k==0){
						cout<<endl;
					}	
				}
				kount = 0;
				
				for(ll i = 1 ; i<= n*k-1; i=i+2){
					cout<<i<<' ';
					kount++;
					if(kount%k==0){
						cout<<endl;
					}	
				}
				}
			}
		}
		
	}



}


int main(){

	solve();
	return 0;


}
