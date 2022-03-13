#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){

	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll count = 0;
		vector<ll> a(n);
		for(auto &x: a)cin>>x;
		for(int i = n-1; i>= 1 ; i--){
			if(a[i]!=a[i-1]){
				if(i-1==0){
					count ++;
				}else{
					count +=2;
				}
			}

		}	


		cout<<count<<endl;
	}

	return 0;

}
