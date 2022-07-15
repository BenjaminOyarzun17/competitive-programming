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


	ll n ;cin>>n;
	vll st;
	double m = 0 ;
	for(int i = 0; i< n; i++){
		ll g; cin>>g;
		st.pb(g);
		m+=(double) g;
	}
	m = m/n;	
	double sol =0;
	for(auto x: st){
		sol+=abs(m-x);
	}
	cout<<floor(sol)<<endl;	

	return 0;
}


