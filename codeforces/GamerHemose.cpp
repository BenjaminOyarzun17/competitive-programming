#include<bits/stdc++.h>

using namespace std;
using ll = long long;




int main(){

	int t ; 
	cin>>t;
	while(t--){
		ll nw, H, w1, w2;
		
		cin>>nw>>H;

		vector<ll> dmg(nw);
		for(auto &x: dmg){
			cin>>x;
		}
		sort(dmg.begin(), dmg.end(), greater<ll>());

		w1 = dmg[0];
		w2 = dmg[1];
		int count = 0;
		while(H>0){
			if(count % 2==0){
				H  = H- w1;
			}else{
				H = H-w2;
			}
			count ++;
		}

		cout<<count<<'\n';





	}




	return 0 ; 
}