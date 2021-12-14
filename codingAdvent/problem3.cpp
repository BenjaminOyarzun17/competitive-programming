#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	int n = 1000;
	int x =  0 ; 
	int depth = 0 ;
	for(int i =0 ; i<n ; i++){
		string s;
		int n; 
		cin>>s>>n;
		//cout<<n<<endl;
		if(s[0]=='f'){
			x+=n; 	
		}
		 if(s[0]=='d'){
			depth +=n;	
		
		}
		if(s[0]=='u'){
			int sub =n;
			//cout<<s[s.size()-1]<<endl;
			depth =depth -sub;
		
		}
	
	
	}
	//cout<<x<<' '<<depth<<endl;
	cout<<x*depth<<'\n';

}


int main(){

	
	solve();

	return 0 ; 
}
