#include<bits/stdc++.h>

typedef long long ll;
using namespace std;



void addEdge(vector<int> adj[], int u, int v)
{
    //u,v corresponden al INDICE del nodo
    adj[u].push_back(v);
    //se hace otra ves al reves, pues u conecta con v Y VICEVERSA
    adj[v].push_back(u);
}
void adjacencyList(){
	int V= 5;//cantidad de nodos
	vector<int> alist[V];
	//addEdge(alist, nodo, nodo);



}




void solve(){


	ll n, m;
	cin>>n>>m;
	vector<string> edificio;
	vector<vector<int,int,bool>>nodos;
	for(int i = 0 ; i< n; i++){
		for(int j =0 ; j< m; j++){
			char tipe;
			cin>>tipe;
			edificio[i].push_back(tipe);
			vector<int, int,bool>dummy = {i, j, false};
			nodos.insert(nodos.end(), nodos.begin(), nodos.end());	
		}

	}
	
	vector<vector<int>>alist(nodos.size());
	for(int fila = 0 ; fila< n; fila++){
		for(int col = 0 ; col< m-1; col++){
			if(edificio[fila][col]=='.' && edificio[fila][col+1]=='.'){
	alist[]	

	}
		}


	}	

}





int main(){
	
	solve();
	return 0;


}

