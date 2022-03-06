#include<bits/stdc++.h>

using namespace std;


void solve(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long> pai;
		vector<long long> imp;
		vector<long long> rem;
		for(long long i =0 ; i< n  ; i++){
			long long g;
			cin>>g;
			if(g&1){
				imp.push_back(g);
			}else{
				pai.push_back(g);
			}
		}
		bool paiI=false, impI= false;

		if(pai.size()&1){

			paiI =true;
			for(long long i = 0 ; i< pai.size()-1; i++){
			cout<<pai[i]<<' ';
		}
			
		}else{
			for(auto x: pai) cout<<x<<' ';
		}

		if(imp.size()&1){

			impI =true;
			for(long long i = 0 ; i< imp.size()-1; i++){
			cout<<imp[i]<<' ';
		}
			
		}else{
			for(auto x: imp) cout<<x<<' ';
		}
		if(impI) cout<<imp[imp.size()-1]<<' ';	

		if(paiI) cout<<pai[pai.size()-1]<<' ';	
		cout<<endl;
	}
}


int main(){
	
	solve();
	return 0;


}
