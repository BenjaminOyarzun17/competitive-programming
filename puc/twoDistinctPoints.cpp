#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll l1, r1, l2, r2;
		ll len1, len2;
		
		cin>>l1>>r1>>l2>>r2;
		len1 = abs(l1-r1);
		
		len2 = abs(l2-r2);
		



		if(r1!=l2 && r1<l2){
			cout<<r1<<' '<<l2<<endl;
		}else if(r1!=l2 && l2<r1){
			cout<<r1<<' '<<l2<<endl;
		}else{

			if(l1<r1){
				cout<<r1--<<' '<<l2<<endl;
			}else{
				
				cout<<r1<<' '<<l2++<<endl;
			}
		}

	}
	return 0;


}
