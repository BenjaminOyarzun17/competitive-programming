#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;
	cin>>t;
	while(t--){

		int n,x;
		cin>>n>>x;
		if(n>=x){
			cout<<x<<endl;
		}else{
			vector<int> sol;
			int current = 1;
			for(int i = 1; i<=x; i++){
				if(current <=n){
					sol.push_back(current);
					current++;
				}else{
					sol.push_back(0);
					current = 1;
				}
			}
			cout<<sol[sol.size()-1]<<endl;
		}



	}

}
