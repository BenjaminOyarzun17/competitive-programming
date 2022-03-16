#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> results(n);
		for(auto &x: results) cin>>x;
		sort(results.begin(), results.end());
		ll count  = 0;
		ll M = results[n-1];
		ll lastAdmited;
		for(int i = n -1; i>=0; i--){
			if(results[i]==M){
				count++;
				continue;
			}else{
				if(i>=n/2){
					count++;
					lastAdmited = results[i];
				}else{
					if(results[i]==lastAdmited){
						count++;
					}else{

						break;
					}	
				}
			}
		}				
		cout<<count<<endl;

	}


	return 0;

}

