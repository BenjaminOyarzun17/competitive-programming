#include<bits/stdc++.h>

using namespace std;
using ll = long long;







int binary(vector<int>&nums, int l, int r, int target){
	int m = (l+ r)/2;
	if(nums[m]==target){
		return m;
	}
	if (l<=r){
		if(target>nums[m]){
			return binary(nums, m+1, r, target);

		}else if (target< nums[m]){
			return binary(nums, l, m-1, target) ;
		}

	}
	//cout<<"nf"<<endl;
	
	return -1;
}



void solve(){

	int n ; 
	cin>>n;
	vector<int>nums(n);
	for(auto &x: nums){
		cin>>x;
	}
	cout<<binary(nums, 0, nums.size()-1, 6)<<endl;
	

}









int main(){

	
	solve();

	return 0 ; 
}