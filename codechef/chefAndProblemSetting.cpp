#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;	
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int fineCount= 0;
		string error;
		for(int i = 0 ; i<=n ; i++){
				string mode;
				cin>>mode;
				if(mode == "correct"){
					bool zero = false;
					for(int k = 0 ; k< m ; k++){
						int g;

						cin>>g;
						if(g==0) zero = true; 
					}
					if(zero){
						error="INVALID";
						break;
					}else{
						fineCount++;
					}
				}else{
					bool zero = false;	
					for(int k = 0 ; k< m ; k++){
						int g;

						cin>>g;
						if(g==0) zero = true; 
					}
					if(!zero){
						error="WEAK";
						break;
					}else{

						fineCount++;
					}
				}
		}

			if(fineCount==m){

				cout<<"FINE"<<endl;
			}else{
				cout<<error<<endl;
			}
	}

}
