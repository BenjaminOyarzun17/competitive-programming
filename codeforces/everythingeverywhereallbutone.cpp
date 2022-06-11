#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;


int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll sum = 0; 
		vll a(n);

		for(auto &x:a){

			cin>>x;
			sum+= x;
		}
		vll r(n);
		bool found = false;
		for(auto x: a){
			if((double)(sum-x)/(n-1) == x){
				found =true;
				break;
			}
		}
		if(found){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;



	}
	return 0;
}
