#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
ll INF = 10e17;
int main(){
	ll  n, k ; cin>>n>>k;
	vll hs(n);
	for(auto &h:hs) cin>>h;
	vll memo (n, -1); 
	memo[0] = 0; 
	memo[1]= abs(hs[0]-hs[1]);
	for(int i = 2 ; i< n; i ++){
		ll actual = INF;
		for(int j = 1 ; j <= k ; j++){
			if(i-j>=0)
			actual = min(actual, abs(hs[i]-hs[i-j])+memo[i-j]);
		}
		if(actual == INF){
			memo[i] = INF;
		}else{
			memo[i] = actual;
		}
	}
	cout<<memo[n-1]<<endl;
	return 0;
}
