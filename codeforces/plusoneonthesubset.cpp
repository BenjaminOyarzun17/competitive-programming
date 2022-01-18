#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		vector<int> nums;
		set<int> con;
		for(int i = 0 ; i< n ; i++){
			int g;
			cin>>g;
			nums.push_back(g);
			con.insert(g);
		}
		if(con.size()==1){
			cout<<0<<'\n';
		}else{
			vector<int>::iterator itm;
			vector<int>::iterator itM;
			itm = min_element(nums.begin(), nums.end());
			itM= max_element(nums.begin(), nums.end());
			cout<<*itM - *itm<<'\n';
		}
	
	}



}





int main(){
	
	solve();
	return 0;


}

