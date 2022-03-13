#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll mo = 998244353;

ll binary(string s){
	
	ll i = s.size()-1;
	ll out =0;
	for(auto x: s){
		if(x=='1'){
			out= (out +(ll)pow(2, i))%mo;
		}
	}	

	return out%mo;


}



int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string s;
		cin>>s;		
		ll sol = 0;
		for(int i = 0 ; i< n-1 ; i ++){
			for(int j = 1; j<= n-i ; j++){
				string su = s.substr(i, j);
				sol = (sol^binary(su))%mo;
			}
		}	
		cout<<sol%mo<<endl;
	}
	return 0;

}
