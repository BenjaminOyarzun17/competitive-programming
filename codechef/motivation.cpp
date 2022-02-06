#include<bits/stdc++.h>

using namespace std;


void solve(){
	int t;
	cin>>t;
	while(t--){
		int N, X;
		vector<pair<int, int>> movies;
		cin>>N>>X;
		for(int i =0 ; i< N ; i++){
			int S, R; 
			cin>>S>>R;
			movies.push_back(make_pair(R, S));	
		}
		sort(movies.begin(), movies.end(), greater<pair<int, int>>());
		for(auto x: movies){
			if(x.second<=X){
				cout<<x.first<<endl;
				break;

			}


		}	
	}


}


int main(){
	solve();
	return 0;

}
