#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	
	int n ;
	int depths=0;
	n = 2000;
	vector<int> nums(n);

	for(auto &x:nums){
		cin>>x;
	}
	for(int i = 1; i < 2000; i++){
		if(nums[i-1]<nums[i]){
			depths++;
		}	
	
	}
	cout<<depths<<endl;
	



}


int main(){

	
	solve();

	return 0 ; 
}
