#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void transform(int i, string &s){

	for(i; i< s.size(); i++){
		if(s[i]=='0'){
			s[i]='1';
		}else{
	
			s[i]='0';
		}

	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll count = 0;
		char lastSeen = s[0]	;
		if(lastSeen=='0')count++;
		for(int i = 0 ; i< s.size() ; i++){
			if(lastSeen!=s[i]){
				count++;
				lastSeen= s[i];
			}
		}
		cout<<count<<endl;
	}


}
