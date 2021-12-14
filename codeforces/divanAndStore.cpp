#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	int t ; 
	cin>>t;
	while(t--){
		ll n, l, r, k;
		int count = 0;
		cin>>n>>l>>r>>k;

		vector<int>a(n);
		vector<int>filter;
		for(auto &x: a){
			cin>>x;
		}
		for(auto x:a){
			if(x>=l && x<=r){
				filter.push_back(x);
			}	
		}
		sort(filter.begin(), filter.end());
		int fs= filter.size();
		
		/*
		for(auto x:filter){
			cout<<x<< ' ';
		}
		*/
		//cout<<endl;

		for(int i = 0 ; i< fs; i++){
			if (k-filter[i]<0){
				break;
			}else{
			    count ++;
			    k= k- filter[i];
			}

		}
		cout<<count<<'\n';
		
		
	}

}


int main(){

	
	solve();

	return 0 ; 
}
