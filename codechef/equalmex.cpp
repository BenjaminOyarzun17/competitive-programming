#include<bits/stdc++.h>
typedef long long ll;
using namespace std;




int main(){

	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> arr (2*n);
		bool zero = false;
		map<ll, ll> counts;
		ll mi = 100000000;
		for(ll i = 0 ; i< 2*n ; i++){
			ll g;
			cin>>g;
			mi = min(mi, g);
			arr.push_back(g);
			if(g==0)zero =true;
			if(counts.count(g)){
				counts[g]++;
			}else{
				counts[g]= 1;
			}
		}

		if(!zero){
			cout<<"YES"<<endl;
		}else{
			if(n == 1){
				cout<<"YES"<<endl;
			}else{
				if(counts[mi]==1){
					cout<<"NO"<<endl;
				}else{
					cout<<"YES"<<endl;
				}
			}	
		}	
	}
	


}
