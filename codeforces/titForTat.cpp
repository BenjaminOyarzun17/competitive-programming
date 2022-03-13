#include<bits/stdc++.h>

using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>a(n);
		for(auto &x: a)cin>>x;
		int current = 0 ;
		while(k--){
			while(a[current]==0 && current< n-1){
				current ++;
			}
			if(current == n-1){
				break;
			}
			
			a[current]--;
			a[n-1]++;		
		}		
		for(auto x: a) cout<<x<<' ';
		cout<<endl;
	}



}



int main(){
	solve();
	return 0;


}
