#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int n;cin>>n;
	string s;cin>>s;
	set<char> pokemons;
	for(auto x: s)pokemons.insert(x);
	ll pokeCount = pokemons.size();
	ll maxLen = 0;
	for(int size = pokeCount ; size< n; size++){
		bool broken =false;
		for(int i= 0 ; i< n-size+1; i++){
			string sub = s.substr(i, size);
			set<char> local;
			for(auto x: sub)local.insert(x);
			if(local.size()==pokeCount){
				maxLen=size;broken = true;
				break;
			}else{
				i+= pokeCount-local.size()-1;
			}
		}
		if(broken) break;

	}
	if(maxLen == 0) maxLen = n;
	cout<<maxLen<<'\n';
	return 0;
}
