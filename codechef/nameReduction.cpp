#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;

	string abc= "abcdefghijklmnopqrstuvwxyz";
	while(t--){
		string a, b;
		cin>>a>>b;
		map<char, int> had;
		map<char, int> need;
		for(auto x: abc){
			had[x]= 0;
			need[x]=0;
		}
		for(auto x: a)had[x]++;	
		for(auto x: b)had[x]++;	
		ll n ;
		cin>>n;
		while(n--){
			string s;
			cin>>s;
			for(auto x: s)need[x]++;
		}			
		bool achieved = true;
		for(auto &pa: need){
			if(had[pa.first]< pa.second){
				achieved = false;
				break;	
			}
		}
		if(achieved){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}


}
