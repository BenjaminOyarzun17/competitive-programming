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


 
// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}
 

















void solve(){


	ll t;
	scanf("%lld", &t);
	while(t--){

	
	}



}





int main(){
	
	solve();
	return 0;


}

