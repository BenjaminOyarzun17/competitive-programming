#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;




ll INF = 1e18;


ll mod =998244353;


ll ck(ll n , ll k, vll &f){
	return	f[n]/(f[k]*f[n-k]%mod)%mod;
}



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll sol = 0 ;
	ll n, k;cin>>n>>k;
	ll M = 1e6;
	vll factoriales(M);
	factoriales[0]=1;
	for(ll i = 1; i<M; i++){
		factoriales[i]= factoriales[i-1]* i%mod;
		//cout<<factoriales[i]<<endl;
	}

	


	for(ll i =k ; i<=n; i++){
		sol+= ck(n, i, factoriales);
	}

	cout<<sol<<endl;


	return 0;
}



