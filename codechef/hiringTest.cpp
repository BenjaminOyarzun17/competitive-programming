#include<bits/stdc++.h>
typedef long long ll;
using namespace std;




int main(){
	int t;cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;

		ll x, y;
		cin>>x>>y;
		for(int i = 0 ; i< n ; i++){
			ll p= 0, f = 0;
			for(int j = 0 ; j< m ; j++){
				char c;
				cin>>c;
				if(c=='P')p++;
				if(c=='F')f++;
			}
			if(f>=x ||( f==x-1 && p >= y)){
				cout<<1;
			}else{
				cout<<0;
			}
			
		}
		cout<<endl;
	}	
	return 0;
}



