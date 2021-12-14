#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	ll n; 
	cin>>n;
	set<ll> times;
	vector<ll> timesFilter;
	for(int i = 0 ; i < n ; i++){
		ll d;
		cin>>d;
		times.insert(d);

	}
	for(auto x: times){
		timesFilter.push_back(x);
	}
	sort(timesFilter.begin(), timesFilter.end());
	//for(auto x: timesFilter)cout<<x<<' ';
	cout<<timesFilter[1]<<'\n';

}


int main(){

	
	solve();

	return 0 ; 
}