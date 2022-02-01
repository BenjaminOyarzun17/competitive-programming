#include<bits/stdc++.h>

typedef  long long ll;

using namespace std;

void solve(){

	ll t;
	cin>>t;

	map<char,ll> tr;
	tr['a']=1;

	tr['b']=2;
	tr['c']=3;
	tr['d']=4;
	tr['e']=5;
	tr['f']=6;
	tr['g']=7;
	tr['h']=8;
	while(t--){
		string start, end;
			
		cin>>start>>end;
		//cout<<start<<endl;
		ll s, e;
	 	s=(tr[start[0]]-1)*8+start[1]-'0';
		
	 	e=(tr[end[0]]-1)*8+end[1]-'0';
		
		s--;
		e--;	
		queue<ll> pending; 
		pending.push(s);
		vector<bool>visited(64, false);
		vector<ll> d(64);
		ll count = 0;
		while(true ){
			
			ll v=pending.front();
			visited[v]=true;
			if(v==e){
				cout<<d[v]<<endl;
				break;
			}
			pending.pop();
			vector<ll> adj = {
				v-10, v-6, v-15,v-17, v+10, v+6, v+15, v+17
			}	;
			for(auto x: adj){
				if(x>=0 && x<64 && visited[x] ==false){
					pending.push(x);
					d[x]=d[v]+1;
					
				}
			}
			count++;
		}
		

	}


}

int main(){
	solve();
	
	return 0;
}
