#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t;	
	cin>>t;
	while(t--){
		ll n, m , k;
		cin>>n>>m>>k;
		ll kount = 0;
		ll count = 0;
		for(int i = 0 ; i< m ; ++i){
			int g;
			cin>>g;
			if(g==1){
				kount ++;
				count++;
			}
		}	
		for(int i = 0 ; i< n -m ; ++i){
			int g;
			cin>>g;
			if(g==1){
				count++;
			}
		}
		if(count != n && kount == m){
			//cout<<count<<' '<<kount<<endl;
			cout<<k<<endl;
	
		}else if(count == n ){
			cout<<100<<endl;
		}else{
			cout<<0<<endl;
		}
	}
	return 0;
}

