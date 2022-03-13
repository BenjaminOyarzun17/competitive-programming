#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;	
	cin>>t;
	while(t--){
		vector<ll> spells(3);
		for(auto & x: spells) cin>>x;
		sort(spells.begin(), spells.end());
		cout<<spells[2]+spells[1]<<endl;
		
	}

}


