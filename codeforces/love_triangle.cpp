#include<bits/stdc++.h>

using namespace std;



int main(){
	
	int n;cin>>n;
	vector<int> adj;
	for(int i = 0 ; i< n; i++) {
		int g;	cin>>g;
		adj.push_back(g);
	}
 	bool triangle= false;	


	for(int i = 0 ; i< n;i++){
		int first,second, third, fourth;
		first = i;
		second = adj[i]-1;
		third = adj[second]-1;	
		fourth = adj[third]-1;
		if(first == fourth) triangle = true;
	}



	if(triangle) cout<<"YES"<<'\n';
	else cout<<"NO"<<'\n';
	return 0;

}
