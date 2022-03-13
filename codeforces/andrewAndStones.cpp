#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void solve(){

	ll t;
	cin>>t;
	while(t--){
		ll n;
		ll sum = 0;
		cin>>n;
		vector<ll> a(n);
		for(auto &x: a)cin>>x;
		for(auto x: a) sum +=x;	
		if(sum-4< 2*(n-3)){
			cout<<-1<<endl;
		}else{
			ll sol = 0	;
			for(int i = 1; i<= n-2; i++) sol+=ceil((int)a[i]/2);
			cout<<sol<<endl;
			
		}

	}


}



int main(){

	solve();
	return 0;


}
