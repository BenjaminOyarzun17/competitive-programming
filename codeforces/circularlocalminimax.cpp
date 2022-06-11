#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vll b(n);
		for(auto &x: b) cin>>x;
		sort(b.begin(), b.end());
		bool broken = false;
		for(int i = 1; i< n; i++){
			ll swap = b[i];
			
			if(i == n-1){
				if((b[i-1]>b[i] && b[i]< b[0])||(b[i-1]<b[i] && b[i]> b[0])){
					continue;
				}else{
					broken = true;
					break ;
				}


			}else{
				if(b[i-1]<b[i]&& b[i]<b[i+1]){
					cout<<"Swap1"<<endl;
					b[i]=b[i+1];		
					b[i+1]	= swap;
					continue;
				}
				if((b[i-1]>b[i] && b[i]< b[i+1])||(b[i-1]<b[i] && b[i]> b[i+1])){
					continue;
				}

				//if(b[i-1]< b[i] && b[i]==b[i+1]){
				/*
					hay que arreglar este condicional en particular. aun no estoy seguro por sobre el error.
				*/
				if(b[i]==b[i+1]){
					ll nxt;
					bool found = false;
					for(ll j = i; j< n; j++){
						if(b[j]!=b[i]){
							found= true;	
							nxt = j;
						}
					}	
					if(!found){
						broken = true;
						break;
					}

					cout<<"Swap2"<<endl;
					b[i]= b[nxt];	
					b[nxt]= swap;
				}
				
			}
		}



	if(broken){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
		for(auto x: b) cout<<x << ' ';
		cout<<endl;
	}
	}		
	return 0;
}
