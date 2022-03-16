#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.size()<5){
			cout<<s<<endl;
		}else{

			for(int i = 0 ; i<= s.size()-5; i++){
				string sub  = s.substr(i, 5);
				//cout<<sub<<endl;
				if(sub=="party"){
					s[i+2]='w';
				
					s[i+3]='r';
					s[i+4]='i';
				}
			}

		cout<<s<<endl;
		}
	}

}
