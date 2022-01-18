#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, sum;
		sum = 0;
		scanf("%lld", &n);
		for(ll i = 0 ; i< n ; i++){
			ll g;
			scanf("%lld", &g);
			sum += g;
		}
		if(sum%n==0){
			printf("%d \n", 0);	
		}else{
			printf("%d \n", 1);
		}
	
	}



}





int main(){
	
	solve();
	return 0;


}


