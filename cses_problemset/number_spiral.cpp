#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	while(t--){
		unsigned long long int x, y;
		cin>>x>>y;
		cout<<(unsigned long long int)(max(x,y)*max(x,y)- min(x,y)+1)<<endl;
	
	}



}





int main(){
	
	solve();
	return 0;


}

