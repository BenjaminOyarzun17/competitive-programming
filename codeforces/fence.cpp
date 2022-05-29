#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll>vvll;
ll INF = 10e17;
int main(){
	ll n, k;cin>>n>>k;
	vll h(n);
	vll memo(n, 0);
	for(auto &x: h) cin>>x;
	
	for(int i = 0; i < n; i++){
		if(i<=k-1){
			memo[k-1]+= h[i];
		}else{
			memo[i]= memo[i-1]-h[i-k]+h[i];
		}
	}
	ll sol = INF;
	ll idx = 0;
	for(int i = k-1; i<n ; i++){
		sol = min(memo[i], sol);
		idx = i-k+1;
	}
	for(auto x: memo) cout<<x<<' ';
	return 0;
}
