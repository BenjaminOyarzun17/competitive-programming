#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){

	ll n;
	scanf("%lld", &n);
	
	ll sum;
	ll obj = (n*n+n)/2;

	for(int i = 0 ; i< n-1 ; i++){
		ll g;
		cin>>g;
		obj= obj- g;
		
	}	
	printf("%lld", obj); 


}





int main(){
	
	solve();
	return 0;


}

