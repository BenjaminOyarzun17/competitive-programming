#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void solve(){
	int t;
	cin>>t;
	while(t--){
		ll n, x;
		cin>>n>>x;
		vector<ll> a(n);
	
		for(auto &x: a) cin>>x;
		sort(a.begin(), a.end());

		ll count = 0;
		for(int i = 0 ; i< n-1 ; i++){
			bool found = false;
			for(int j = i+1  ; j< n;j++){
				if(a[j]==a[i]*x){
					a[i]=0;
					a[j]=0;
					found = true;
					break;
				}
			}
			if(!found)count++;
		}	
		cout<<count-1<<endl;
	}


}

int main(){

	solve();
	return 0;


}
