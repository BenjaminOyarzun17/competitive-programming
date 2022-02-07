#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void solve(){

	ll t;
	cin>>t;
	while(t--){
		ll n, x, y;
		cin>>n>>x>>y;
		vector<ll> a(n);
		for(auto &z: a) cin>>z;
		cout<<(x^a[0])<<endl;			


	}


}


int main(){

	solve();

	return 0;

}
