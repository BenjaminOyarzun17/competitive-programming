#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t; cin>>t;
	while(t--){
		ll x; cin>>x;
		ll xdu = x;
		ll andpos = 30;
 		ll xorpos = 30;
		if(xdu&1){
			andpos = 0;
			xdu >>1;
		}else{
		for(int i = 0 ; i<30 ; i++){
			if((xdu>>1)&1){
				andpos = i;	break;
			}
		}
		}
		if(andpos>0){
			xorpos = andpos -1;
		}else{
		for(int i = andpos ; i<30-andpos ; i++){
			if( (xdu>>1)^1){
				xorpos = i;	break;
			}
		}
		}
		cout<<andpos<<' '<<xorpos<<endl;

	}	

	return 0;
}
