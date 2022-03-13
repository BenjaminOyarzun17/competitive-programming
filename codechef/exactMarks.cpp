#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n, x;
		cin>>n>>x;
		if(x == 0){
			cout<<"YES"<<endl;	

			cout<<0<<' '<<0<<' '<<n<<endl;
			cout<<endl;
		}else{
			if(x%3==0){
				if(x/3 <=n){
					cout<<"YES"<<endl;	
					cout<<x/3<<' ' <<0<<' '<<n-(x/3)<<endl;
				}else cout<<"NO"<<endl;
			}else{
					
				ll excess = ceil((double)x/3);
				ll negatives = excess*3 -x;
				ll needed = excess + negatives;

				//cout<<excess<<' ' <<x<<' ' <<negatives<<endl;
				if(needed <= n  && negatives> 0){
				
					cout<<"YES"<<endl;
					cout<<excess<<" "<<negatives<<" "<<n-excess-negatives<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
		}
	}

}
