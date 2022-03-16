#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> speeds (n);
		for(auto &x: speeds)cin>>x;
		ll max_speed = speeds[0];
		ll count = 0;
		for(int i = 0 ; i< n; i++){
			if(speeds[i]<=max_speed){
				count ++;
				max_speed = min(max_speed, speeds[i]);
			}
		}
		cout<<count<<endl;
	}


	return 0;

}


