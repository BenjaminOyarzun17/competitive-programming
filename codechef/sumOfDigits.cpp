#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;	
		cin>>s;
		ll su = 0;
		for(auto x: s){
			su+= x-'0';
		}
		cout<<su<<endl;
	}
        return 0;


}
