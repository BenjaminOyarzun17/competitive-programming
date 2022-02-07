#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll t;
	cin>>t;
	vector<ll> nums(t);
	for(auto &x: nums) cin>>x;
	sort(nums.begin(), nums.end());
	for (auto x: nums ) cout<<x<<endl;
	return 0;
}
