#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void solve(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> a(n);	
		for(auto &x: a) cin>>x;
		if(a[n-2]>a[n-1]){
			cout<< -1<<endl;
		}else{
			if(a[n-1]>0){
				cout<<n-2<<endl;
				for(int i = 0 ; i<n-2; i++){
					cout<<i<<' '<<a[n-2]<<' '<<a[n-1]<<endl;
				}
	

			}else{
				bool sorted = true;
				for(int i = 0 ; i<n-1 ; i++){
					if(a[i]>a[i+1]) sorted = false;
				}
				if(sorted){
					cout<<0<<endl;					
				}else{
					cout<<-1<<endl;
				}
	
			}
		

		}


	}


}



int main(){
	solve();
	return 0;




}
