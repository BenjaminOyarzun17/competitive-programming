#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int a, b,c, r;

		cin>>a>>b>>c>>r;
		int d= a;
		a = min(a,b);	
		b = max(d,b);
		if( a<c && c<b){
			cout<<max(0, c-r-a)+max(b-(c+r), 0)<<endl;

		}else if(c>=b){
			if(c-r>=b){
				//cout<<a<<' '<<b<<' '<<c-r<<endl;
				cout<<abs(b-a)<<endl;
			}else{
				cout<<max(0, c-r-a)<<endl;
			}
		}else{//c<=a
			if(c+r<=a){
				cout<<abs(b-a)<<endl;
			}else{
				cout<<max(0,b-(c+r))<<endl;
			}
		}


	}
	return 0;


}

