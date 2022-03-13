#include<bits/stdc++.h>
using namespace std;


bool pal(string s, int n){
	string rev="";
	for(int i = n; i>=0;i--){
		rev.push_back(s[i]);
	}

		//cout<<s<<' '<<rev<<endl;
	if(s==rev){
		return true;	
	}else return false;
}


void solve(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool allA = true;
		for(auto x: s){
			if(x!='a'){
				allA = false;
				break;
			}
		}
		if(allA){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
	
			int n = s.size();
			string su =s;
			su.push_back('a');
			if(pal(su, n)){
				cout<<'a';
				cout<<s<<endl;
			}else{
				cout<<su<<endl;
			}
		
		}

	
	}

}


int main(){
	solve();
	return 0;


}
