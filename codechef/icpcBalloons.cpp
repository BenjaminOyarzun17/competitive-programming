#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t;	
	cin>>t;
	while(t--){
		ll n ;
		cin>>n;
		set<ll> se;
		ll itc = 0;
		while(itc<n){
			ll g;
			cin>>g;	
			itc ++;
			if(g>=1 && g<=7 && se.size()<7){
				se.insert(g);	
			}
			if(se.size()==7)break;	
		}
		cout<<itc<<endl;
	}
	return 0;
}


