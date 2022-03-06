#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


void DFS(vector<ll> &solutions, vector<ll> &a, ll i, ll node  , ll n){
	solutions[i]+= a[node];
	node= node+ a[node];
	if(node<n){
		DFS(solutions, a, i, node, n);
	}


}


void solve(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> a(n);	
		vector<ll> solutions(n,0);
		for(auto &x: a) cin>>x;
		for(ll i = 0; i< n ; i++){
			DFS(solutions, a, i , i, n);
		}		
		vector<ll>::iterator ma = max_element(solutions.begin(), solutions.end());
		cout<<*ma<<endl;

	}


}



int main(){
	solve();
	return 0;


}
