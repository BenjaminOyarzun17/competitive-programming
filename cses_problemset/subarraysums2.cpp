#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, ob; 
	cin>>n>>ob;
	vll a;
	map<ll, ll> sumas;
	sumas[0]++;
	ll pref= 0 ;
	ll count = 0 ;
	for(int i = 0 ; i< n ; i++){
		ll g; cin>>g;
		a.pb(g);
	}
	for(auto x: a){
		pref+= x;
		count+=sumas[pref-ob];
		sumas[pref]++;
	}
	cout<<count<<endl;
	return 0;
}


