#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main(){

	ll  n ; cin>>n;
	vll hs(n);
	for(auto &h:hs) cin>>h;
	vll memo (n, -1); 
	

	memo[0] = 0; 
	memo[1]= abs(hs[0]-hs[1]);
	for(int i = 2 ; i< n; i ++){
		memo[i] = min(abs(hs[i]-hs[i-1])+memo[i-1], abs(hs[i]-hs[i-2])+memo[i-2]);
	}
	cout<<memo[n-1]<<endl;
	
	return 0;
}
