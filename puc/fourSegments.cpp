#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	set<pair<ll, ll>> points;
	ll Mx, mx, My, my;
	for(int i =0; i< 4; i++){
		ll x1,y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;
		Mx=max(x1,max(Mx, x2));
		mx=min(x1,min(mx, x2));
		My=max(y1,max(My, y2));
		my=min(y1,min(my, y2));
		points.insert(make_pair(x1,y1));
		points.insert(make_pair(x2,y2));
	}


	if(points.size()==4){
		bool broken = false;
		vector<bool> states(4, false);	
		for(auto p: points){
			if(p.first == Mx && p.second== My){
				states[0]=true;	
			}
		}	
		for(auto p: points){
			if(p.first == Mx && p.second== my){
				states[1]=true;	
			}
		}	
		for(auto p: points){
			if(p.first == mx && p.second== My){
				states[2]=true;	
			}
		}	
		for(auto p: points){
			if(p.first == mx && p.second== my){
				states[3]=true;	
			}
		}	
		for(auto x: states) {
			if(!x)broken = true;
		}


		if(!broken) cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';

	}else{
		cout<<"NO"<<'\n';

	}




	return 0 ;

	


}
