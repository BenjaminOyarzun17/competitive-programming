#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	

	int t;
	cin>>t;
	while(t--){
		ll sol = 0;
		ll n;
		cin>>n;
		for(int i = 5;(ll)( n/i)>=1; i*=5){
			sol+= (ll)( n/i);
		}
		cout<<sol<<endl;	
	}	


	return 0;


}
