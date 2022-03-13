#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void solve(){
	int t;
	cin>>t;
	while(t--){
		ll n, m, k;
		cin>>n>>m>>k;
		k--;
		if(n ==1){
			if(k>0 && m ==0){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{

		if(k<=0 || m<n-1){
			cout<<"NO"<<endl;
		}else{
			ll k_max= 2;
			bool exceded = false;
			if(m == (ll) ((n*(n-3))/2)+n){
				k_max = 1;
			}
			if(m> ((n*(n-3))/2)+n)exceded = true;
			if(n == 0) k_max= 0;
			if(k_max<k && !exceded){
				
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		}

	}	


}

int main(){

	solve();


	return 0;
}
