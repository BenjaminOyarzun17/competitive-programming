#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){

	ll n, x;
	ll count = 0 ; 
	cin>>n>>x;
	vector<pair<int, bool>> ch;
	for(int i = 0 ; i< n ; i++){
		ll g;
		cin>>g;
		if(g<=x) ch.push_back(pair<int, bool>(g, false));
	}
	
	sort(ch.begin(), ch.end());
	
	


	ll i, j;
	i= 0;
	j= (ll)ch.size()-1;
	while(i!=j){
		if(ch[i].first+ch[j].first<=x){
			ch[i].second = true;
			ch[j].second = true;
			i++;
			j--;
			count++;
		}else if(ch[i].first+ch[j].first>x){
			j--;

		}
		//cout<<i<<' '<<j<<endl;
		if(i==j+1)break;
	}

	for(auto o: ch){
		if(o.second==false)count++;
	}


	cout<<count<<endl;

	

}





int main(){
	
	solve();
	return 0;


}

