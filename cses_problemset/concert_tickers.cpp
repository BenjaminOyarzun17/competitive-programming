#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


int bs(vector<pair<int,bool>>v, int l , int r, int x ){
	int m = (l+r)/2;
	if(l == r){
		return -1; 
	}else if(v[m]==x){
		return m;
	}else{
		
		if(v[m]>x){//m es muy grande
			return bs(v, l, m ,x);	
		}else if(v[m]<x){
			return bs(v, m , r, x);		
		}

	}
	




}







void solve(){
	ll as, ws;
	cin>>as>>ws;
	vector<pair<int, bool>> tickets;
	vector<int> customers;

	for(int i = 0; i< as; i++){
		int g;
		cin>>g;
		tickets.push_back(pair<int, bool> (g, false));

	}

	for(int i = 0; i< as; i++){
		int g;
		cin>>g;
		customers.push_back(g);
	}
	sort(tickets.begin(), tickets.end());
	for(auto x: customers){
		int *p; 
		p = find(tickets.begin(), tickets.end(), x);
		if(p != tickets.end());


	}



}





int main(){
	
	solve();
	return 0;


}

