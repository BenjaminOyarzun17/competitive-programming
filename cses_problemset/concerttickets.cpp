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

ll bs(ll x, ll i , ll j, vll &a){
	if(i<=j){
		ll mid = (i+j)/2;	
		if(a[mid] == x)	return mid;
		else if(a[mid]>x)return bs(x, i , mid-1, a);
		return bs(x, mid+1, j, a);
	}
	return j;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n,  m; cin>>n>>m;
	vll t;	
	for(int i =0 ; i< n; i++){
		ll g; cin>>g;
		t.pb(g);
	}
	sort(t.begin(), t.end());	
	for(int i = 0 ; i < m; i++){
		ll c;cin>>c;
		ll can = bs(c, 0, n-1, t);
		if(t[can]<=c){

			cout<<t[can]<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}


	return 0;
}


