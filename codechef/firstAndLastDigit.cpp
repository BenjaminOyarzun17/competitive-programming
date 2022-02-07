#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll a = s[0]-'0';
		ll b= s[s.size()-1]-'0';
		cout<<a+b<<endl;
	}
	return 0;
}
