#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	cin>>t;

	while(t--){
		ll n;
		cin>>n;
		vector<ll> v;
		set<ll> se;
		for(ll i= 0 ; i< n; i++){
			ll g;
			cin>>g;
			v.push_back(g);
			se.insert(g);
		}
		if(se.size()==n){

			cout<<-1<<endl;
		}else if (se.size()==1){
			cout<<n-1<<endl;
			
		}else{
			map<ll, vector<ll>>freqs;
			vector<ll>reps;
			ll solution = -1;
			ll counter=0;
			for(auto x: v){
				if(freqs.count(x) != 0){
					freqs.insert(pair<ll, vector<ll> >(x, vector<ll>()));

					freqs[x].push_back(counter);
					
				}else{
					freqs[x].push_back(counter);
				}
				counter++;
			}

			for(auto &pair: freqs){
				//cout<<pair.second.size()<<endl;
				if(pair.second.size()>1){
					sort(pair.second.begin(), pair.second.end(), greater<ll>());

					solution = max(solution, pair.second[1]+n-pair.second[0]);
					

				}
			}		
			//vector<int>::iterator itM= max_element(solutions.begin(), solutions.end());
			cout<<solution<<endl;
			
		}
	
	}



}





int main(){
	
	solve();
	return 0;


}

