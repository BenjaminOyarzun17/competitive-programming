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
ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll t; cin>>t;
	while(t--){
		ll n, x;
		cin>>n>>x;
		if(x>=n){
			cout<<0<<endl;
		}else{
			ll d = n-x;
			cout<<ceil((double)d/4)<<endl;
		}
	}


	return 0;
}


