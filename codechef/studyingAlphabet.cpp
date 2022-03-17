#include<bits/stdc++.h>
typedef long long ll;
using namespace std;




int main(){
		string alpha;
		cin>>alpha;
		string abc = "abcdefghijklmnopqrstuvwxyz";
		map<char, bool> known;	
		for(auto x: abc){
			known.insert(make_pair(x, false));
		}
		for(auto x: alpha) known[x]=true;
		ll n;
		cin>>n;
		
		for(int i = 0 ; i< n ; i++){
			string u;
			cin>>u;
			bool broken = false;
			for(auto x: u){
				if(!known[x])broken = true;
			}
			if(broken)cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
		}
		

}

