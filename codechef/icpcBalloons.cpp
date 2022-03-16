#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t;	
	cin>>t;
	while(t--){
		ll n ;
		cin>>n;
		vector<ll> probs(n);
		for(auto &x: probs) cin>>x;
		vector<bool> found(7, false);
		ll i = 0;	
		for(i; i< n ; i++){
			if(probs[i]>=1 && probs[i]<=7){
				found[probs[i]-1]=true;
			}
			ll foundCount = 0;
			for(auto x: found) {
				if(x)foundCount++;
			}		
			if(foundCount==7)break;
		}
		cout<<i+1<<endl;	
	}
	return 0;
}


