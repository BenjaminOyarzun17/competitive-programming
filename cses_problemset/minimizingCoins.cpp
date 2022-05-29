#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
ll INF = 10e17;



int main(){
	
	ll n, x; 
	cin>>n>>x;
	
	vll dp(x, -1);
	vll coins(n);
	for(auto &y: coins) cin>>y;
	for(auto c: coins){
		if(c<=x)dp[c-1] =1;
	}
	for(int i = 0 ; i< x ; i++){
		if(dp[i]==-1){
			ll pro = INF;
			for(auto c: coins){
				if(i-c>=0){
					if(dp[i-c]!=-1)	pro = min(pro, dp[i-c]+1);
				}
		
			}
			if(pro!=INF)dp[i] = pro;
		}
	}

	if(dp[x-1]==-1){
		cout<<-1<<endl;
	}else cout<<dp[x-1]<<endl;
	return 0;
}



