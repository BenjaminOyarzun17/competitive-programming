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
		ll n;cin>>n;
		ll base = (n-6)/3;
		ll res = (n-6)%3;
		if(res == 0)	{
			cout<<base+2<< ' '<<base+3<<' '<<base+1<<endl;
		}else if(res == 1){
			cout<<base+2<< ' '<<base+4<<' '<<base+1<<endl;
		}else{

			cout<<base+3<< ' '<<base+4<<' '<<base+1<<endl;
		}

	}


	return 0;
}


