#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vll;
int main(){

	ll n;
	cin>>n;
	vector<vector<ll>> op(n);
	for(int i = 0 ; i< n ; i++){
		ll a, b, c;
		cin>>a>>b>>c;
		op[i].push_back(a);
		op[i].push_back(b);
		op[i].push_back(c);
	}
	ll sum = 0 ;	
	vector<pair<ll, ll>> memo(n) ;

	if(n ==1){
		cout<<*max_element(op[0].begin(), op[0].end())<<endl;
	}else{


	for(int i = 0 ; i< n ; i++){
		if(i==0){
			ll lm = 0;
			ll pos;
			for(ll j = 0 ; j<3; j++){
				if(i!=j){
					if(op[i][j]+op[i+1][j]>lm){
						lm = op[i][j];
						pos = j;
					}
				}
			}
			memo[i] = {lm, pos};
		}else if(i == n-1){
			ll lm = 0;
			for(int j= 0 ; j< 3; j++){
				if(j!=memo[i-1].second){
					lm = max(lm, op[i][j]);
				}	
			}


			memo[i] = {lm + memo[i-1].first, 0};
		}else{
			ll lm = 0 ;				
			ll pos;
			for(ll j = 0 ; j< 3; j++){
				if(i!=j && i!=memo[i-1].second){
					if(op[i][j]+op[i+1][j]>lm){
						lm = op[i][j];
						pos = j;
					}
				}
			}
			memo[i] = {lm+memo[i-1].first, pos};
		}

	}

	cout<<memo[n-1].first<<endl;
	}


	return 0;

}
