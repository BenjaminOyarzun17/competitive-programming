#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;

typedef vector<vll> vvll;
int main(){
	ll n, m; cin>>n>>m;
	vvll adj(n);
	for(int i = 0 ; i< m ; i++){
		ll a, b;
		cin>>a>>b;
		a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vector<bool> visited(n, false);
	vector<ll> section;	
	ll count = 0 ;		

	map<ll, bool> available;
	for(ll i = 0 ; i< n ; i++){
		available.insert({i, false});
	}
	while (!available.empty()){//no estoy seguro si es inclusivo
		count++;
		ll start ; 
		for(auto &x: available){ start = x.first;break;}
		queue<ll> city;
		city.push(start);
		visited[start] = true;
		available.erase(start);
		while(!city.empty()){
			ll c = city.front(); city.pop();
			
			for(auto x: adj[c]){
				if(!visited[x]){
					city.push(x);

					visited[x] = true;
					available.erase(x);
				}	
			}
		}
		
		section.push_back(start);
		
	}
	if(section.size()==1){
		cout<<0<<endl;
	}else{

		cout<<section.size()-1<<endl;
		for(int i = 0 ; i < section.size()-1; i++){
			cout<<section[i]+1<< ' '<<section[i+1]+1<<endl;
		}
	}
		
	return 0;
}
