#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;	
	cin>>t;
	while(t--){
		ll w1, w2, x1, x2, m;
		cin>>w1>>w2>>x1>>x2>>m;
		if(x1*m<=w2-w1 && x2*m>=w2-w1){
			//cout<<x1*m<<" "<<x2*m<<" "<<w2-w1<<endl;
			cout<<1<<endl;
		}else cout<<0<<endl;
	}

}

