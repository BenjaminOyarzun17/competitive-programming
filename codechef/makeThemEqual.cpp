#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t;	
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll mi = 1000000;
		ll ma = 0;
		for(int i = 0 ; i< n; i++){
			ll g;
			cin>>g;
			mi = min(mi, g);
			ma = max(ma, g);
		}
		cout<<ma - mi<<endl;
	}
	return 0;
}
