#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){

		ll n;
		cin>>n;
		if(n<6){
			cout<<0<<endl;
		}else if(n == 6){
			cout<<1<<endl;
		}else{
			cout<<1+ (n-6)/7<<endl;
		}
	}

}
