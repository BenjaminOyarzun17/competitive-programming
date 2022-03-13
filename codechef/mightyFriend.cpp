#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int n, k;
		ll motuc =0 , tomuc= 0;
		cin>>n>>k;

		vector<int> motu, tomu;
		for(int i = 1 ; i<= n; i++){
			int g;
			cin>>g;
			if(i&1){
				motu.push_back(g);
				motuc+=g;	
			}else{
				tomu.push_back(g);
				tomuc+=g;
			}
		}
		sort(motu.begin(), motu.end(), greater<int>());
	
		sort(tomu.begin(), tomu.end());
		if(n == 1){
			cout<<"NO"<<endl;
		}else{
		if(tomuc> motuc){
			cout<<"YES"<<endl;
		}else{
			if(n/2<k){
				k = n-1;	
			}

			for(int i = 0 ; i<= k; i++){
				if(motu[i]> tomu[i] && k!=0){
				motuc -= motu[i];

				motuc += tomu[i];
				tomuc -= tomu[i];
				tomuc += motu[i];
				}
			}
			if(tomuc> motuc){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		}
	}
}
