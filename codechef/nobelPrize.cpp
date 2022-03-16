#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n, m;
		cin>>n>>m;
		set<ll> total;
		for(int i = 0; i< n; i++){
			ll g;
			cin>>g;
			total.insert(g);
		}
		if(total.size()< m){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	

}
