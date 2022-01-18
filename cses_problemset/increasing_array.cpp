#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll n;
	scanf("%lld", &n);
	ll count = 0 ; 
	vector<ll> v(n);
	for(auto &x:v)cin>>x;
	ll pmax = v[0];
	for(int i = 1 ; i < n ; i++){
		if(v[i]< pmax){
			count += pmax- v[i];
		}else{
			pmax=v[i];
		}
			

	}
	printf("%lld", count);

}





int main(){
	
	solve();
	return 0;


}

