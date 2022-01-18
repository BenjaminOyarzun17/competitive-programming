#include<bits/stdc++.h>

using namespace std;






void solve(){

	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		string s, T;
		cin>>s>>T;
		string sol = "";
		map<char, int> pres;
		for(char x: s){
			if(pres.count(x)>0){
				pres[x]++;
			}else{
				pres[x]=1;
			}
		}	
		for(auto &pair: pres){
			for(int i = 0 ; i< pair.second; i++){
				sol.push_back(pair.first);
			}
		
		}	

		n = s.size();
		for(int i = 0 ; i< n-2; i++){
			if( sol.substr(i, 3)==T){
				char aux = sol[i+1];
				sol[i+1]= s[i];
				sol[i]= aux;
			}
		
		
		}		
		cout<<sol<<endl;
		
	
	}


}








int main(){

	solve();



}



