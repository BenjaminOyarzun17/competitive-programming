#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int m = 0;
		for(int i = 0 ; i< 3 ; i++){
			int g;
			cin>>g;
			m = max(m, g);
		}
		cout<<m<<endl;
	}


}
