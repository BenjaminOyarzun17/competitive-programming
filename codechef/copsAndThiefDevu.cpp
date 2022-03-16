#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll m, x, y;
		cin>>m>>x>>y;
		vector<bool>marked (100, false);
		ll sol = 0;
		for(int i = 0 ; i< m ; i++){
			ll g;
			cin>>g;
			ll lower = max(g-x*y-1,(ll) 0);
			ll upper = min(g+x*y,(ll) 100);
			for(int j = lower; j< upper; j++){
				marked[j]=true;	
			}
		}
		for(auto x: marked){
			if(x==false)sol ++;
		}	
		//for(auto x: marked)cout<<x<<' ';
		//cout<<endl;	
		cout<<sol<<endl;
	}
	

}

