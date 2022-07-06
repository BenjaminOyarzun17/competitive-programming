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

	ll n;cin>>n;
	vll a(n);
	for(auto &x: a) cin>>x;
	ll csol = a[0];
	ll cg = a[0];
	for(int i = 1; i< n; i++){
		cg = max(cg+a[i], a[i]);
		csol = max(csol, cg);
	}
	cout<<csol<<'\n';


	return 0;
}


