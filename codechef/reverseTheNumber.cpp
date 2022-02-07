#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;	
		int iv= stoi(s);
		while(iv%10==0){
			iv= iv/10;
		}
		for(int i = startIndex; i>=0; i--){
			if(s[i]!='0')cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
