#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t;	
	cin>>t;
	while(t--){
		ll n;	
		cin>>n;
		vector<ll> gas(n);	
		for(auto &x: gas) cin>>x;
		ll gasoline  = 0;
		ll position = 0;
		ll distance = 0;
		while(gasoline>=0){
				gasoline += gas[position];

				gas[position] =0;
				if(gasoline ==0){
					break;
				}else{
	
					distance ++;
					if(position==n-1){
						position = 0;
					}else{
						position ++;
					}

					gasoline --;
				}
				
		}	
		cout<<distance<<endl;
		
	}
	return 0;
}



