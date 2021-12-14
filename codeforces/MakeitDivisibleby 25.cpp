#include<bits/stdc++.h>

using namespace std;





int main(){

	int t;
	cin >>t;

	while(t--){
		string s;
		cin>>s;
		int count = 0 ;
		if (stoi(s)%25==0){
			cout<<count<<'\n';
		}else{
			for (int i = s.size()-1; i>=0; i--){
				if(s[i]=="0"  && i>1){
					if(s[i-1]=="5"||s[i-1]=="0"){
						count ++;
					}
				}else if(s[i]=="5" && i>1){
					if(s[i-1]=="2"||s[i-1]=="7"){
						count ++;
					}

				}

			}
			cout<<count <<'\n';
		}

		}





	}



	return 0 ; 
}