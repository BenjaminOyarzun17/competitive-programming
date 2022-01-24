#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){
	map<char, ll> count;
	set<char>especial;
	string s;
	cin>>s;
	for(auto x: s){
		especial.insert(x);
		if (count.count(x)==0){
			count.insert(pair<char, ll>(x, 1));
		}else{
			count[x]++;
		}
	}
	vector<char>oddFound;	
	for(auto &pair:count){
		if(pair.second &1){
			oddFound.push_back(pair.first);
		}
	}
	if (especial.size()==1){
		cout<<s<<endl;
	}else{
		if(oddFound.size()>1){
				cout<<"NO SOLUTION"<<endl;
			}else{
				
				deque<char> sol;
				if(oddFound.size()==1){
					ll iter = count[oddFound[0]];
					for(ll i = 0 ; i< iter; i++){
					sol.push_back(oddFound[0]);
					}
				}

				for(auto &pair: count){
					for(ll i = pair.second/2 ; i> 0 ;i--){	
						if (oddFound.size()>0){
							if(pair.first!= oddFound[0]){
								sol.push_back(pair.first);
								sol.push_front(pair.first);
							}
						}else{
								sol.push_back(pair.first);
								sol.push_front(pair.first);

						}
					}
				}
				string solu = "";
		        

				for(auto x: sol){
					
					solu.push_back(x);
				}	
				cout<<solu<<endl;
			}
		
	}


	

}





int main(){
	
	solve();
	return 0;


}

