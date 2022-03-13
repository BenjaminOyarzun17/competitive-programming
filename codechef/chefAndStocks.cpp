#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;	
	cin>>t;
	while(t--){
		double s, a, b, c;
		cin>>s>>a>>b>>c;
		double fin = s + (c/100)*s;
		if(fin>=a && fin<=b){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

}



