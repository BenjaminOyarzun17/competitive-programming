#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
	ll n;cin>>n;
	if(n==3){
		cout<<1*2*3<<endl;
	}else{
		ll sol = 0;	
		sol += (n)*(n-1)+ 6;
		for(int i = 3; i<=n-2; i++){
			//cout<<i<<endl;
			//ll local = i*(i+1);
			//cout<<local<<endl;
			sol+= i*(i+1);
		}
		cout<<sol<<endl;
	}
	return 0;
}
