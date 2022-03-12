#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;	
	cin>>t;
	while(t--){
		ll x;
		cin>>x;
		if(x<=2){
			if(x==1){
				cout<<0<<endl;
			}else{
				cout<<1<<endl;
			}
		}else{
			if(x/2 &1){
				cout<<x-1<<endl;
			}else{
				cout<<x<<endl;
			}
		}
	}

}




