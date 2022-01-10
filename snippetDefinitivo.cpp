#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll bintoInt(string bin){
	//transforma un numero binario en un numero decimal
	ll num = 0;
	ll len = bin.size()-1;
	for(int i = 0 ; i< bin.size(); i++){
		num+= (bin[i]-'0')*pow(2,len);
	       len--;	
	
	}

	return num;o


}


void solve(){

	int t ; 
	cin>>t;
	while(t--){
		cout<<t<<endl;
	}

}


int main(){

	
	solve();

	return 0 ; 
}