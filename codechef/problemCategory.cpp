#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		if(x<100) cout<<"Easy"<<endl;
		if(x>=100 && x<200) cout<<"Medium"<<endl;
		if(x>=200)cout<<"Hard"<<endl;
	}

}
