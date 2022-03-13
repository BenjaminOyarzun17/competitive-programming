#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){

	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n&1){
		cout<<(n/2)+1<<endl;
		}else{
			cout<<n/2<<endl;
		}
	}	

}
