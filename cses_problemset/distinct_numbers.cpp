#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	set<ll>nums;
	for(int i = 0; i< t; i++){
		ll g;
		cin>>g;
		nums.insert(g);


	}
	cout<<nums.size()<<endl;


}





int main(){
	
	solve();
	return 0;


}

