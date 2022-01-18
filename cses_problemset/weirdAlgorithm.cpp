#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	cout<<t<<' ';
	while(t!=1){
		if(t&1){
			t= (3*t) +1;
			cout<<t<<' ';
		}else{
			t= t/2;
			cout<<t<<' '; 	
		}
	}
		

}





int main(){
	
	solve();
	return 0;


}
