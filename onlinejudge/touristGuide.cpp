#include<bits/stdc++.h>

using namespace std;


void artpoint(vector<vector<int>>&adj, vector<bool>&visited, vector<int>&dt, vector<int>&L,vector<bool> &articulations, int &time,int n, int parent){

	visited[n]=true;
	dt[n]= L[n]= ++time;
	int children = 0;
	for(auto v: adj[n]){
		if(!visited[v]){
			children ++;
			time++;
			artpoint(adj, visited, dt, L, articulations, time, v, n);
			L[n] = min(L[n], L[v]);//a esta altura L[v] ya esta definido. 
			if(parent !=-1 && L[v]>=L[n]){
				articulations[n]=true;
			}
		}else if(v!= parent){
			
			L[n] = min(L[n], dt[v]);//aqui especial atencion al DT, pq asi en caso de ser un abuelo del parent, encontre un BACK EDGE!!
	}

	}
	if( parent ==-1 && children>1){
		articulations[n]=true;
	}

}

void solve(){


	int t;
	int num = 0;
	while(cin>>t){
		if(t==0){
			break;
		}
		num++;
		map<string, int> cities;
		
		map<int, string> idx;
		for(int i =0; i< t; i++){
			string city;
			cin>>city;
			cities[city]= i;
			idx[i]= city;	
		}
		int R;
		cin>>R;
		vector<vector<int>>adj(t);
		for(int i =0; i< R; i++){
			string a, b;
			cin>>a>>b;
			adj[cities[a]].push_back(cities[b]);	
			adj[cities[b]].push_back(cities[a]);	
		}
		vector<bool> visited(t,false);
		vector<int> dt(t);
		vector<int> L(t);	
		vector<bool> articulations(t,false);
		int time = 0;

		artpoint(adj, visited, dt, L,articulations,  time, 0, -1);
		vector<int> found;
		for(int i = 0;i< t; i++){
			if(articulations[i]){
				found.push_back(i);
			}
		}
		cout<<"City map #"<<num<<": "<<found.size()<<" camera(s) found"<<endl;
		for(auto x: found){
			cout<<idx[x]<<endl;
		}
	}



}



int main(){
	solve();
	return 0;


}
