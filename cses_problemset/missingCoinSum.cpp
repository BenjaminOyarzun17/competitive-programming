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
	vll c;
	ll w= 0;
	map<ll, bool> seen;
	for(int i =0  ;i< n; i++){
		ll g; cin>>g;
		c.pb(g);w+=g;
	}
	sort(c.begin(), c.end());
	//for(auto x: c) cout<<x<<endl;	
	for(int i = 1; i<w; i++){
		vll ::iterator l;
		l = lower_bound(c.begin(), c.end(), i);
		ll id = l- c.begin();	//!!
		cout<<id<<endl;
		if(c[id]==i){

			seen[i] = true;
			continue;
		}else if(c[id]== 0){
			cout<<i<<endl;				
			break;
		}else{
			ll csm = 0;
			bool found = false;
			while(id>=0){
				csm+= c[id];
				if(csm==i){
					found = true;	
					seen[i] = true;
					break;
				}else if(csm>i && !seen[i]){
					cout<<csm<<endl;
					break;
				}
				id--;
			}
			if(!found){
				cout<<i<<endl;
				break;
			}else{

				seen[i] = true;
			}
			
		}
	} 


	




	return 0;
}


