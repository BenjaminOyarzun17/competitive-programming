#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


int DFS(vector<int> &g, vector<bool> & visited, int i, int d, int a, int  b){
	visited[i]=true;
	vector<int>posibles = {
		i-1, i+1, i-b, i+b, i-b-1, i-b+1, i+b-1, i+b+1
	};

	vector<int> continuacion;
	//for(auto x: continuacion)cout<<x<<' ';cout<<endl;
	for(auto x: posibles){
		if(x>=1 && x<= a*b && g[x]==g[i]+1 && visited[x]==false){
			continuacion.push_back(x);	
		}	
	}
	if(continuacion.size()==0){


		return d;
	}else{
		//for(auto x: continuacion)cout<<x<<' ';cout<<endl;
		for(auto x: continuacion){
			return DFS(g,visited, x, d+1, a, b);
		}
	}
	//return d;

}


void solve(){
	string abc= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	map<char, int> lex;
	int counter= 1;
	for(auto x: abc){
		lex[x]=counter;
		counter ++;
	}	
	int a, b;
	//cin>>a>> b;
	int cas= 1;
	while(cin>>a>> b){
		if(a==0 && b==0 )break;
		vector<int> grafo;
		for(int i = 0 ; i< a; i++){
			string s;
			cin>>s;
			
			for(auto x: s){
				grafo.push_back(lex[x]);
			}
		}				
		int longest= 0;

		
		for(int i = 0 ; i< grafo.size(); i++){
			if(grafo[i]==1){
				vector<bool>visited(a*b, false);
			       
			       longest= max(DFS(grafo, visited,i , 1, a,b), longest);
			}	
		}	
		cout<<"Case "<<cas<<": "<<longest<<endl;
		cas ++;

	}	


}



int main(){

	solve();
	return 0 ;



}
