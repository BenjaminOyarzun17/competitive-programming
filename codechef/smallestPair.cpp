#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<ll> nums;
		for(int i = 0 ; i< n; i++){
			ll g;cin>>g;
			nums.push_back(g);
		}
		sort(nums.begin(), nums.end());
		cout<<nums[0]+nums[1]<<'\n';	
	}
	return 0;
}
