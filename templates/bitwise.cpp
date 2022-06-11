#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;




ll INF = 1e18;
ll mod = 1e9+7;





ll bintoInt(string bin){
	//transforma un numero binario en un numero decimal
	ll num = 0;
	ll len = bin.size()-1;
	for(int i = 0 ; i< bin.size(); i++){
		num+= (bin[i]-'0')*pow(2,len);
	       len--;	
	
	}

	return num;


}



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
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}
