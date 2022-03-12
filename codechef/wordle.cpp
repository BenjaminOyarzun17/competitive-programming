#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		string h, s;
		cin>>h>>s;
		for(int i = 0 ; i< h.size(); i++){
			if(h[i]==s[i]){
				cout<<'G';
			}else{
				cout<<'B';
			}
		}
		cout<<endl;
	}

}
