#include<bits/stdc++.h>

using namespace std;


/*

dijkstra es para grafos con peso

busca el mejor camino de un nodo a otro 
MINIMIZANDO el peso.

es un algoritmo greedy; en cada paso toma la 
decision mas optima/beneficiosa


en la cola, no vamos a elegir el vecino que este primero, sino que el nodo que sea mas optimo.  

ahora, si encuentro un camino alternativo a un nodo ya visitado, que es mas optimo, entonces actualizo su distancia. 


por lo tanto
- para cada nodo guardo su distancia 
- para cada vecino al nodo 
 	- comparo la distancia 
	- si el vecino ya esta visitado, y la distancia es mas optima, actualizo su distancia
	- si el nodo no ha sido visitado, actualizo la distancia. 
	- ademas, siempre guardamos 



en dijkstra guardamos siempre el camino mas corto a CADA nodo


cola de prioridad: 
- en vez de dar el primero que entro, nos da el que tiene la mayor prioridad (debe ser definido)



*/
typedef long long ll;
ll INF = 10e18;

int main(){
	int n, m ; cin>>n>>m;
	//formato {distancia, nodo}
	vector<vecotr<pair<ll, ll>>> adj(n);
	for(int i=0 ;i<n ; i++){
		ll u,v,w;cin>>u>>v>>w;
		u--; v--;
		adj[u].push_back({v,w});

		adj[v].push_back({v,w});
	}
	using state = pair<ll, ll>;
	priority_queue<state, vector<state>, greater<state>>pq;
	vector<ll> dist(n, INF);
	pq.push({0,0});
	dist[0]=0;	
	vector<ll> parent(n);
	while(!pq.empty()){
		auto [peso_camino,u] = pq.top();//par con menor peso
		/*
			obtiene el primer par y lo tira en dos variables. *si el top es pair
			similar a python
		*/
		pq.pop();
		if(peso_camino!=dist[u])continue;//en caso que en una iteracion anterior 
		// se actualizo el peso del nodo [el peso que tiene no es el peso menor posible 
 		// que se ha descubierto; pueden haber varios pesos diferentes para el mismo nodo. 
		for(auto [v,w] : adj[u]){
			// para cada vecino v con peso w	
			if(peso_camino+ w< dist[v]){//encontramos un camino mejor
				dist[v] = peso_camino+w;
				pq.push({dist[v], v});
				parent[v]=u;
			}
		}	
	}

	return 0;



}
