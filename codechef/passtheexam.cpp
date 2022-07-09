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
		vll a;
		ll sum = 0;
		for(int i = 0 ;i< 3; i++){
			ll g; cin>>g;
			a.pb(g);
			sum+=g;
		}
		bool p= false;
		if(a[0]>=10 && a[1]>=10 && a[2]>=10 && sum>=100)p = true;
		if(p){
			cout<<"PASS"<<endl;
		}else cout<<"FAIL"<<endl;
	}




	return 0;
}


