
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void solve(){

	int t;
	scanf("%d", &t);

	while(t--){
		ll n;
		set<ll>approved;
		scanf("%lld", &n);
		for(int i = 1 ; i<= floor(sqrt(n)); i++){
			approved.insert(i*i);	
		}
		for(int i = 1 ; i<= floor(cbrt(n)); i++){
			approved.insert(i*i*i);
		
		}	
		printf("%d", approved.size());	
		printf("\n");
	
	
	}





}
int main(){

	solve();

	return 0;



}
