#include<bits/stdc++.h>

using namespace std;
using ll = long long;




string solve(vector<string>& strs){
	char base = strs[0][0];
	bool band = true;
	for (auto x: strs){
		if (x[0]!=base){
			band = false;
			break;
		}
	}if (!band){
		return "";
	}else{
		int minLe = 100000;
		for(auto x: strs){
			minLe = min(minLe, x.size());
		}
		vector<string>commons;
		for(int i = 0; i < minLe; i++){
			string commmon = strs[0].substr(0, i)
			bool equal = true;



		}



	}
	

}


int main(){

	
	solve();

	return 0 ; 
}