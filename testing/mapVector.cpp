#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;

	map<int,vector<int>>ma; cin>>n;
	vector<int>v(n);
	for(auto &x: v)cin>>x;
	int counter = 0;
	for(auto x: v){
		if(ma.count(x)!=0){
			ma.insert(pair<int, vector<int> >(x, vector<int>()));
			ma[x].push_back(counter);
		}else{
			ma[x].push_back(counter);
		}
		counter++;	
	}
	for(auto &pair: ma){
		cout<<pair.second.size()<<endl;
		for(auto x: pair.second){
			cout<<x<<' ';
		}
		cout<<endl;

	}
}
