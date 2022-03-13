#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n, p, x,y;
		ll count = 0;
		cin>>n>>p>>x>>y;	
		vector<ll>q(n);
		for(auto &x: q)cin>>x;
		for(int i= 0 ; i< p; i++){
			if(q[i]==1){
				count +=y;
			}else{
				count += x;
			}
	
		}	
		cout<<count<<endl;
		
	}	

	return 0;


}
