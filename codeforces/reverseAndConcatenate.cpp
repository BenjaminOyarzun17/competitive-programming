#include<bits/stdc++.h>

using namespace std;


string reverse( string s){
		string r = "";
		for(int i = s.size()-1; i>=0 ;i--){
			r.push_back(s[i]);
			
		}
		return r;
	}


void solve(){

	int t;
	cin>>t;
	while(t--){
		int n, k;

		cin>>n>>k;
		string s;
		cin>>s;
		if(k==0){
			cout<<1<<endl;
		}else{
			if(s==reverse(s)){
				cout<<1<<endl;
			}else {
				cout<<2<<endl;
			}
		}

	}


}


int main(){
	solve();
	return 0;


}
