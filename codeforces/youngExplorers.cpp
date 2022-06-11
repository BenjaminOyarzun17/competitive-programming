#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int main(){
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		vll e(n);
		vector<pll>  dp(n);
		for(auto &x: e) cin>>x;
		sort(e.begin(), e.end());
		pll initial = {e[0], 1};
		dp[0] = initial;
		ll groups = 0 ;
		for(int i = 1; i< n ; i++){
			if(dp[i-1].second == dp[i-1].first){
				groups ++;
				dp[i] = {e[i], 1};
				continue;
			}
		
			if(e[i] == e[i-1] && dp[i-1].second < dp[i-1].first){
				dp[i]=dp[i-1];
				dp[i].second++;
			}
			if(e[i]> e[i-1] && dp[i-1].second < dp[i-1].first){
				dp[i]=dp[i-1];
				dp[i].first= e[i];
				dp[i].second++;
			}
		}
			if(dp[n-1].second == dp[n-1].first){
				groups ++;
			}
		cout<<groups<<endl;

	}	

	return 0;
}
