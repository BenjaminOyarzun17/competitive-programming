#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main(){
	ll t;cin>>t;
	while(t--){
		ll n, bag , k; cin>>n>>bag>>k;
		vll h(n);
		for(int i = 0 ; i< n ;i++){
			ll a;cin>>a;
			h[i]=a;
		}
		bool broken = false;
		for(int i = 0 ; i< n-1 ; i++){

			//cout<<"current bag:"<<bag<<endl;
			//cout<<h[i]<< ' '<<h[i+1]<<endl;
			if(h[i]-h[i+1] >= 0){
				bag+= h[i]-h[i+1]+k;//ojo con el -1	
			}
			if(h[i]-h[i+1]<0 && abs(h[i]-h[i+1])<=k){
				bag+= k-abs(h[i]-h[i+1]);
			}
			if(h[i]-h[i+1]<0 && abs(h[i]-h[i+1])>k){
				
				if(abs(h[i]-h[i+1])-k>bag){

					broken = true;
					break;
				}else{

					bag= bag- abs(h[i]-h[i+1])-k;
				}

			}
		}
		if(!broken){
			//cout<<bag<<endl;
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}	

	return 0;
}
