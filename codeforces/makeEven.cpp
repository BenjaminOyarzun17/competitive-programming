#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	int t ; 
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool evenFound= false;
		if(stoi(s)%2==0){
			cout<<0<<'\n';
		}else{
			for(auto x: s){
				if((x-'0')%2==0){
					evenFound=true;
				}
			}					
			if(evenFound){
				if((s[0]-'0')%2==0){
					cout<<1<<endl;
				}else{
					cout<<2<<endl;
				}
			}else{
			cout<<-1<<'\n';
			}
			
		}	
			
	}

}


int main(){

	
	solve();

	return 0 ; 
}
