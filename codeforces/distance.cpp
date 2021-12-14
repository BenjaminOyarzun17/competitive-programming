#include<bits/stdc++.h>

using namespace std;
using ll = long long;











int main(){
	int t ; 
	cin>>t;
	while(t--){
		int x, y, m;
		cin>>x>>y;
		m = (x+y)/2;
		//cout<<"m:"<<m<<endl;
		vector<pair<int , int>> ac;
		vector<pair<int , int>> bc;
		for(int i = 0 ; i <= m ; i++){
			ac.push_back(make_pair(0+i, m-i));
		}
		for(int i = 0 ; i <= m ; i++){
			bc.push_back(make_pair(x-m+i, y-i));
		}		
		bool band = false;
		for(auto x: ac){
			for (auto y:bc){
				if (x.first == y.first && x.second == y.second &&!band){
					cout<<x.first<<" "<<x.second<<'\n';
					band = true;
				}

			}
		}
		if(!band){
			cout<<-1<<" "<<-1<<'\n';
		}


	}




	return 0 ; 
}
