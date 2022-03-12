#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		double u, v, a,s;
		cin>>u>>v>>a>>s;
		if(u<=v){
			cout<<"YES"<<endl;
		}else{
		 	double vf = (double)(u*u-2*a*s);
			if(v*v>=vf){

				//cout<<vf<<' '<<v<<endl;
				cout<<"YES"<<endl;
			}else{
	
				cout<<"NO"<<endl;
			}	
		}



	}

}
