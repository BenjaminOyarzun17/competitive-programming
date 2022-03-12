#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll d, l, r;
		cin>>d>>l>>r;
		if(l>d){
			cout<<"Too Early"<<endl;
		}else if(d>r){
			cout<<"Too Late"<<endl;
		}else{
			cout<<"Take second dose now"<<endl;
		}	
	}


	return 0;
}
