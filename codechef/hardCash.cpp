#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t;	
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		ll res = 0;
		for(int i = 0 ; i< n ; i++){
			ll g;cin>>g;
			res += g%k;
		}
		cout<<res%k<<endl;	
	}
	return 0;
}




