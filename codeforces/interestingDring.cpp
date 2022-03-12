#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	ll n;
	cin>>n;	
	vector<ll> a(n);
	for(auto &x: a) cin>>x;

	sort(a.begin(), a.end());
	ll q;
	cin>>q;
	for(int i = 0 ; i< q; i++){
		ll g;
		cin>>g;
		vector<ll>::iterator upper = upper_bound(a.begin(), a.end(), g);
		cout<<upper- a.begin()<<endl;
	}	


}
