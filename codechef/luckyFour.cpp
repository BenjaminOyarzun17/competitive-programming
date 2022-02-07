#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll sum = 0;
		for(auto x: s){
			if(x=='4')sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
