#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll n;cin>>n;
	vector<ll> ps;
	for(int i = 0 ; i < n ; i++){
		ll a ;cin>>a;
		ps.push_back(a);
	}
	vector<ll> dp(n, 0);
	dp[0] = 1;
	ll M = 0;
	for(int i = 1; i<  n ; i++){
		if(2*ps[i-1]>=ps[i]){
			dp[i]= dp[i-1]+1;

		}else{
			dp[i]= 1;
		}
	}
	cout<<*max_element(dp.begin(), dp.end())<<endl;

	
	return 0;
}
