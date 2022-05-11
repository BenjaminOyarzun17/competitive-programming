#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
int main(){
	ll n, m; cin>>n>>m;
	vvll adj(n);
	for(int i = 0 ; i< m ; i++){
		ll a, b; cin>>a>>b;
		a--; b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}	
	vector<ll> v(n, -1);
	vll ta;
	vll tb;
	queue<ll> q;
	map<ll, bool> available;
	for(ll i = 0 ; i< n ; i++) available.insert({i, true});
	bool broken = false;
	for(auto &p: available){
		if(broken) break;
		if(p.second){
			q.push(p.first);

			ta.push_back(p.first);
			v[p.first]=0;
			available[p.first]= false;
	while(!q.empty()){
		ll c = q.front(); q.pop();
		for(auto x: adj[c]){
			if(v[x] ==-1){
				if(v[c] == 0){
					bool noteam = false;
					for(auto y: adj[x]){
						if(binary_search(tb.begin(), tb.end(), y)){
							noteam = true;	
						}	
					}
					if(noteam){
						broken = true;
						break;
					}else{
						v[x] = 1;
						available[x] =false;
						q.push(x);
						tb.push_back(x);
					}
				}else if(v[c] == 1){
					bool noteam = false;
					for(auto y: adj[x]){
						if(binary_search(ta.begin(), ta.end(), y)){
							noteam = true;	
						}	
					}
					if(noteam){
						broken = true;
						break;
					}else{
						v[x] = 0;
						available[x] = false;
						q.push(x);
						ta.push_back(x);
					}
					
				}
			}
		}
	}
	}	
	}
	sort(ta.begin(), ta.end());

	sort(tb.begin(), tb.end());
	for(auto x: ta){
		for(auto y: adj[x]){
			if(binary_search(ta.begin(), ta.end(), y)){
				broken = true;break;
			}
		}
	}

	for(auto x: tb){
		for(auto y: adj[x]){
			if(binary_search(tb.begin(), tb.end(), y)){
				broken = true;break;
			}
		}
	}


	if(broken){
		cout<<"IMPOSSIBLE"<<endl;

	}else{
		for(auto x: v){
			cout<< x+1<< ' ';	
		}
			
		cout<<endl;
	}
	return 0;
}
