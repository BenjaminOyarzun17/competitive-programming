#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	int n = 2000;
	int count = 0;
	int profs[n];
	for(int i = 0 ; i< n ; i++){
		cin>>profs[i];
	}
	for(int i= 0; i< n-3; i++){
		int lower = 0; 
		int upper = 0;
		lower  = accumulate(profs+i, profs+i+3, lower);
		upper = accumulate(profs+i+1, profs+i+4, upper);
		


		
		if(lower<upper){
			count++;
		}	
	
	}
	//for(auto x: profs)cout<<x<<endl;
	cout<<count<<'\n';
}


int main(){

	
	solve();

	return 0 ; 
}
