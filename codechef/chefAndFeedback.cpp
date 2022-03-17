#include<bits/stdc++.h>
typedef long long ll;
using namespace std;




int main(){
	int t;cin>>t;
	while(t--){
		string f;
		cin>>f;
		bool found101 = false;
		bool found010 = false;
		for(int i = 0 ; i< f.size(); i++){
			string sub = f.substr(i, 3);
			//cout<<sub<<endl;
			if(sub == "101"){
				found101=true;
			}	
			if(sub == "010")found010=true;
		}
		if(found101==true || found010)cout<<"Good"<<endl;
		else cout<<"Bad"<<endl;
	}	
	return 0;
}


