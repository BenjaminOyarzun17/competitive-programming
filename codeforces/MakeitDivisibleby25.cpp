#include<bits/stdc++.h>

using namespace std;





int main(){

	int t;
	cin >>t;

	while(t--){
		string s;
		cin>>s;
		int count = 0 ;
		
		map <char, int> found;
		map['5']=-1;
		map['2']=-1;
		map['0']=-1;
		map['7']=-1;
		vector<char> keys = {'5','2','0','7'};
		vector<char> approved;
		vector<int> solutions;
		vector<int> pares = {"50", "25", "00", "75"}
		if (stoi(s)%25==0){
			cout<<count<<'\n';
		}else{
			int idx = 0 ; 
			for (char x: s){
				
				if (count(keys.begin(), keys.end(), x)){
					found[x]=idx;
				}
				idx ++;
			}

			for (auto x: keys){
				if (found[x]!=-1){
					approved.push_back(x);
				}
			}


			for (int ca = 0; ca<4; ca++){

				for(int i = s.size()-1; i>=0 ; i++){

							}
			}
			





			//cout<<count <<'\n';
			

		}

	return 0 ; 


	}



	
