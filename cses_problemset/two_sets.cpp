#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll n;
	scanf("%lld", &n);
	vector<bool> visited;
	for(ll i = 0 ; i< n ; i++){
		visited.push_back(false);

	}
	ll sum = ((n*(n+1))/2);
	if(sum&1){
		cout<<"NO"<<endl;
	}else{

		bool found= false;
		ll i = n;
		
		ll accumulate = n;
		
		while(!found && i>=1){
			ll required = sum/2-accumulate;
			
			visited[i-1]= true;
			//cout<<required<<endl;
			if (accumulate==sum/2){
				found = true;
				break;
			}


			if(required<i){
				
				visited[required-1]=true;
				found = true;
				break;
			}


			i--;	
			accumulate+= i;
		}
		if(found == false){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
			cout<<count(visited.begin(), visited.end(), true)<<endl;
			for(ll i = 0 ; i< visited.size(); i++){
				if(visited[i]){
					cout<<i+1<<' ';
				}
			}
			cout<<endl;
			cout<<count(visited.begin(), visited.end(),false)<<endl;
			for(ll i = 0 ; i< visited.size(); i++){
				if(!visited[i]){
					cout<<i+1<<' ';
				}
			}
		}
	}



}





int main(){
	
	solve();
	return 0;


}

