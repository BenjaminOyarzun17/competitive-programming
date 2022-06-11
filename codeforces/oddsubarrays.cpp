#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
typedef vector<ll> vll;
int main(){
	ll t; cin>>t;
	while(t--){
		ll n ; cin>>n;
		ll count =0; 
		vll b(n);
		for(auto &x: b) {
			cin>>x;
		}
		ll i = 0;
		while(i<n-1 ){
			if(b[i]>b[i+1]){
				count++;	
				if(i+2<n){
					i+=2;
				}else break;
			}else{
				i++;	
			}
		}

		cout<<count<<endl;	
	}
	return 0;
}
