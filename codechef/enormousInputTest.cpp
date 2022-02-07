#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n, k;
	cin>>n>>k;
	ll div = 0;
	while(n--){
		ll ti;
		cin>>ti;
		if(ti%k==0) div++;
	}
	cout<<div<<endl;
        return 0;


}
