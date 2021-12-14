#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	int n = 1000;

	int aim =0;
	int depth=0;
	int x = 0;
	for(int i = 0 ; i< n ; i++){
		string s;
		int a;
		cin>>s>>a;
		if(s[0]=='f'){
			x+=a;
			depth=depth+ aim*a;
		}
		 if(s[0]=='d'){
			aim +=a;

		}
		if(s[0]=='u'){
			
			
			aim =aim-a;

		}
		//cout<<aim<<' '<<depth<<' '<<x<<endl;
	
	
	}
	cout<<depth*x<<endl;


	
}


int main(){

	
	solve();

	return 0 ; 
}
