#include<bits/stdc++.h>

using namespace std;



using ll = long long;


int main(){
	int t;
	cin>>t;


	while(t--){
		ll n;
		ll count = 0;
		cin>>n;

		vector<ll> a(n);
		vector<ll> debt;

		for(auto &x: a){
			cin>>x;
		}
		for(ll i = 0 ; i< n ; i++){
			ll obj = i+1;
			if(a[i]>obj){
				debt[i]= a[i]-i;
			}else{
				debt[i]=0;
			}
		}
		for (int i = 0 ; i < n ; i++){
			if (debt[i]!=0){
				count = count + debt[i];
				for (int j = i; j < n ; j++){
					
				}
			}
		}



		cout<<count<<'\n';






	}

	return 0 ; 
}