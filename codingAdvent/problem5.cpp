#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll bintoInt(string bin){

	ll num = 0;
	ll len = bin.size()-1;
	for(int i = 0 ; i< bin.size(); i++){
		num+= (bin[i]-'0')*pow(2,len);
	       len--;	
	
	}

	return num;


}


void solve(){

	int n= 1000;
	int ncol = 12;

	vector<int>onesCount(ncol);
	string gammaS;
	string epsilonS;
	for(int i = 0 ; i< n; i++){
		string s;
		cin>>s;

		for (int col =0; col< onesCount.size(); col++){
			if(s[col]=='1') onesCount[col]++;	
		
		} 	
	}
	for(auto x: onesCount){
		if(x>n/2){
			gammaS.push_back('1');
			epsilonS.push_back('0');
		
		}
			
		
		if(x<n/2){
			gammaS.push_back('0');
			epsilonS.push_back('1');
		}	
	}
	
	cout<<bintoInt(gammaS)*bintoInt(epsilonS)<<endl;
	cout<<gammaS<<endl;


}


int main(){

	
	solve();

	return 0 ; 
}
