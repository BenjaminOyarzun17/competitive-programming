#include<bits/stdc++.h>

using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map <char, int> f;
		f['0']= 0;
		f['1']= 0;
		
		for(auto x: s){
			f[x]++;	
		}
		if(f['0']==0 || f['1']==0){
			

			cout<<0<<endl;
		}else{
		if(f['0']==f['1']){

			cout<<(s.size()/2)-1<<endl;
		}else{
			cout<<min(f['0'], f['1'])<<endl;
		}
		}
	}


}



int main(){
	solve();
	return 0;


}
