#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t;
	cin>>t;	
	while(t--){
		ll a, b, c, d , k;
		cin>>a>>b>>c>>d>>k;
		ll dis = abs(a-c)+abs(b-d);

		//cout<<dis<<' '<<k<<endl;
		if(dis == k){
			cout<<"YES"<<endl;
		}else if(dis<k){
			if((k-dis)&1){
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}

}
