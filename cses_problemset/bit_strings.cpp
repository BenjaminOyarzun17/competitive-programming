#include<bits/stdc++.h>

typedef unsigned long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	//ll especial = 2%(1000000000+7);
	ll mo = 1000000000+7;
	ll i2=1;	
	for(ll i=1; i<= t; i++){
		i2= (i2*2)%mo;
	}
	cout<<i2<<endl;

}





int main(){
	
	solve();
	return 0;


}

