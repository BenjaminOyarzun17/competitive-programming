#include<bits/stdc++.h>
typedef  long long  ll;
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
	ll n;
	cin>>n;
	ll fa = 1;
	for(int i = 1;i<= n;i++){
		fa*=i;
	}
	cout<<fa<<endl;	
	}
	return 0;
}


