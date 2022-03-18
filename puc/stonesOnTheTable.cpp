#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll count = 0;
	char last = s[0];
	ll i = 0;
	for(auto x: s){
		if(x==last && i!= 0){
			count++;
		}else{
			last = x;
		}
		i++;
	}
	cout<<count<<endl;
		
		
	return 0;


}
