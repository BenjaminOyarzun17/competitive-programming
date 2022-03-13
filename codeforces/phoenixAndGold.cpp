#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){

	int t;
	cin>>t;
	while(t--){
		ll n, pr;
		cin>>n>>pr;
		ll sn = 0;
		vector<ll> a(n);	

		for(auto &x: a){
			cin>>x;
		}
		for(auto x: a) sn += x;
		if(sn==pr){
			cout<<"NO"<<endl;
		}else{
			ll current = 0;
			sort(a.begin(),a.end());
			
			bool finished = false;
			for(int i =0 ; i< n ; i++){
				if(current + a[i] == pr){
					bool swaped = false;
					for(int j = i+1; j<n ; j++){
						if(a[j]!=a[i]){
							ll sw = a[i];
							a[i]=a[j];
							a[j]=sw;
							swaped = true;
						}
					}
					if(swaped){
						current += a[i];
					}else{
						cout<<"NO"<<endl;
						finished = true;
						break;
					}
				}else{
					current += a[i];
				}
		
			}	
			if(!finished){
				cout<<"YES"<<endl;
				for(auto x: a) cout<<x<<' ';
				cout<<endl;
			}
		
		}
	}

}



int main(){
	
	solve();
	return 0;


}
