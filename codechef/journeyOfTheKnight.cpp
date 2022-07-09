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


bool ck(ll x, ll y, ll dx, ll dy){
	if(x+dx>=0 && x+dx<=7 && y+dy>=0 && y+dy<=7){
		return true;
	}return false;

}



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);


	ll t; cin>>t;
	ll n = 8;
	while(t--){
		vvll dt(n, vll (n, -1));
		ll x0, y0; cin>>x0>>y0;
		x0--; y0--;
		ll xf, yf; cin>>xf>>yf;
		xf--; yf--;
		vll at;
		vpll moves={{2,1}, {-2, -1}, {-2,1}, {2,-1}, {1,2}, {-1,-2}, {-1,2}, {1,-2}};
		queue<pll> q;
		q.push({x0, y0});
		dt[x0][y0]=0;
		if(x0== xf && y0== yf){
			cout<<"YES"<<endl;
		}else{
		while(!q.empty()){
			auto [x, y]= q.front(); q.pop();
			for(auto [dx, dy]: moves){
				if(ck(x, y, dx, dy)){
					if(x+dx== xf && y+dy == yf){
						at.pb(dt[x][y]+1);
					}else{
						if(dt[x+dx][y+dy]==-1){
						dt[x+dx][y+dy]= dt[x][y]+1;
						q.push({x+dx, y+dy});
						}
					}
				}
			}
		}
		if(!at.empty()){
			bool done = false;
			for(auto x: at){
				if(x<=100 && x%2==0){
			
					done =true;
					break;
				}
			}
			if(done){
				cout<<"YES"<<endl;
			}else cout<<"NO"<<endl;
		}else cout<<"NO"<<endl;


		}

		



	}




	return 0;
}


