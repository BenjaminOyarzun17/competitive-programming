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
	ll n, x;
	cin>>n>>x;
	vll a;
	map<ll, vll> pos;
	for(int i = 0 ;i< n; i++){
		ll g; cin>>g;
		a.pb(g);
		pos[g].pb(i);
	}
	sort(a.begin(), a.end());
	ll i= 0 ; 
	ll j = n-1;
	ll p1, p2;
	bool found = false;
	while(i!=j){
		ll sum =a[i]+a[j];
		if(sum >x){
			j--;
		}else if(sum<x){
			i++;
		}else {
			found = true;
				
			p1 = pos[a[i]][0];
			p2 = pos[a[j]][0];
			if(a[i]==a[j]){
				p2 = pos[a[i]][1];
			}
			break;
		}
	}
	if(found){
		cout<<p1+1<< ' '<<p2+1<<endl;
	}else cout<<"IMPOSSIBLE"<<endl;



	return 0;
}


