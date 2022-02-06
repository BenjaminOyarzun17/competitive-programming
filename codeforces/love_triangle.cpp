#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){

	ll n;
	cin>>n;
	vector<int> lovers(n);
	for(auto &x: lovers)cin>>x;
	bool found = false;
	for(int i = 0 ; i< n ; i++){
		if(lovers[lovers[lovers[i]-1]-1]-1==i-1){
			
			
			found = true;
			break;	
		}	
	}
	if(found){
		cout<<"YES"<<endl;
	

	}else{
		cout<<"NO"<<endl;
	}


}





int main(){
	
	solve();
	return 0;


}

