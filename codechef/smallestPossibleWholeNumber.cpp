#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;	
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		if(n-k<0){
			cout<<n<<endl;
		}else{
			if(k == 0){
				cout<<n<<endl;
			}else  cout<<n-(n/k)*k<<endl;
		}
	}

}
