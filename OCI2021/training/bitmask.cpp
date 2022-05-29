#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res((1<<n));
        for(int mask = 0; mask < (1<<n); mask++)
        {
            for(int i = 0; i < n; i++)
            {
                if(mask&(1<<i)) // is the i-th bit of this mask 1?
                {//This mask corresponds to a subset containing i-th number of nums array
                    res[mask].push_back(nums[i]);
                }
            }
        }
        return res;
 }

int main(){

	int t;
	cin>>t;	
	vector<int> nums; 
	for(int i  = 0 ; i< t; i++){
		int a;cin>>a;
		nums.push_back(a);
	}
	vector<vector<int>>ss= subsets(nums);
	cout<<ss.size()<<endl;
	for(auto subset: ss){
		for(auto e: subset)cout<<e<< ' ';
		cout<<endl;
	}
	return 0;
}
