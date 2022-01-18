#include<bits/stdc++.h>

typedef long long ll;
using namespace std;



void solve(){

	string abc= "abcdefghijklmnopqrstuvwxyz";
	map<char, int> lex;
	int iter = 1;
	for(auto x: abc){
		lex[x]=iter;
		iter ++;
	}

	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, k;

		string s;
		string solution="";
		scanf("%lld", &n);
		cin>>s;
		if (n == 1){
			cout<<s+s<<endl;
		}else{
			for(ll i = 0 ; i< n ; i++){
				if(lex[s[i]]< lex[s[i+1]] && i!= n-1){
					k = i;
					break;
				
				}
				if (lex[s[i]]== lex[s[i+1]] && i==0){
					k = i ;
					break;
				}
				

				if (i == n-1){
					k= n-1;	
				}		
					
			}
			for(ll i = 0 ; i<= k ; i++){
				solution.push_back(s[i]);
			}
			for(ll i = k ; i>=0 ; i--){
				solution.push_back(s[i]);
			}
			cout<<solution<<'\n';
		}
	}



}





int main(){
	
	solve();
	return 0;


}

